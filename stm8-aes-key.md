# Reverse engineering the EQ-3 CC-RT-BLE OTA

I extracted the following from the EQ-3 CC-RT-BLE radiator thermostat
firmware update process. The bootloader gates further attacks (boot-time
validator in ROP-protected flash), but the OTA pipeline itself is now
fully understood and the AES-256 key + IV are recoverable.

## What's inside

**AES-256-CBC key (loaded into RAM during OTA):**

```
ad 8e 21 f4 15 03 98 dc a5 b1 75 e5 67 92 b1 40
dc 8a 06 a8 73 d5 06 85 9f 8a ec 7f b0 da 9b e6
```

**Initial IV (also in RAM during OTA):**

```
32 b8 e7 2f 89 08 5b 2a 6a 8b cd f7 05 76 96 ac
```

The whole `.enc` OTA stream is **one continuous AES-CBC chain** rooted at
this IV. Decrypting under (KEY, INITIAL_IV) yields the full plaintext;
no per-chunk IV is needed in the wire format despite what the wire layout
suggests.

## How I got the key

The MCU is an STM8L052C6. Its internal flash is read-out-protected (SWIM
reads of flash return the constant `0x71` filler), but **RAM reads via
SWIM are not blocked**, and the OTA bootloader has to load the key/IV
into RAM in cleartext to do AES-CBC. So:

1. Enter OTA mode by sending `FD A0 ...` over UART (which the bootloader
   waits for after reset).
2. The bootloader then loads the AES key + IV into RAM:
   - Key at `$0010..$002F`
   - Initial IV at `$0062..$0071`
3. Halt the CPU via SWIM (e.g.
   `stm8flash -c stlinkv2 -p stm8l052c6 -s ram -b 2048 -r ram.bin`)
   and just read RAM. The key and IV are sitting there in plain text.

The bootloader code itself lives in ROP-protected flash (`$F1E0..$FFFF`)
so you can't read the binary directly, but it has to load the key into
addressable RAM to use it — and that RAM is readable.

## UART access (BLE chip removal)

The thermostat's STM8L doesn't talk BLE itself — there's a separate BLE
chip ("the blue chip") on the same board that handles BLE radio and
exchanges UART frames with the STM8L over USART1.

The MCU's USART1 is on **PA2 (TX) / PA3 (RX)**. These nets are
conveniently brought out to two test pads on the PCB labeled **MP1**
and **MP2** — natural attach points for a serial adapter. The catch is
that the BLE chip drives the same UART line whenever it's running, so
anything you transmit on MP1/MP2 collides with the BLE chip's traffic.
To get clean access:

1. Desolder the BLE module from the PCB. (I just tore it off with wire cutters)
2. Wire an FTDI 3.3 V serial adapter to MP1 / MP2.
3. Common GND between FTDI and the device.

After this, OTA frames addressed to the STM8L go straight from the FTDI
to the chip. The OTA bootloader's UART protocol is identical to what the
BLE chip sniffer captured, so the dialog can be replayed and modified at
will.

## OTA wire format

Each `.enc` file is a sequence of length-prefixed records:

```
[len_be:2] [body:len bytes] [crc:2]
```

There are 224–230 records per firmware (varies by version). All bodies
are multiples of 16; almost all are 144 bytes.

The CRC is **CRC-16/CMS**:

- polynomial: `0x8005`
- initial value: `0xFFFF`
- non-reflected (input and output)
- no final XOR

It covers the body only (the bytes between the length prefix and the CRC
trailer), not the length itself. The same CRC variant is used both on
individual OTA chunks and on the higher-level UART frames the bootloader
exchanges (`FD <payload> <crc>`); `0xFD` is a sync byte excluded from
CRC input.

## RAM↔flash word rotation

This one tripped me up for a while. The AES output bytes are NOT written
verbatim to flash — they're permuted within each 4-byte word.

Specifically, after AES-CBC decryption you get a stream of "RAM order"
bytes. Each 4-byte aligned word `[r0, r1, r2, r3]` becomes
`[r3, r0, r1, r2]` when written to flash. Equivalently:

```
flash[k*4 + 0] = ram[k*4 + 3]
flash[k*4 + 1] = ram[k*4 + 0]
flash[k*4 + 2] = ram[k*4 + 1]
flash[k*4 + 3] = ram[k*4 + 2]
```

So if you decrypt an `.enc` and the resulting bytes look like garbage,
apply this rotation per 4-byte word and they snap into a recognisable
STM8 binary (vector table at `$8000-$807F`, app code from `$8080`).

If you want to forge a `.bin → .enc`, apply the inverse rotation
(`flash → ram`: `[a, b, c, d]` becomes `[b, c, d, a]`) before encrypting.

The rotation is presumably a hardware quirk of how the bootloader
streams AES output bytes into the flash write peripheral. Whatever
the reason, it's deterministic and easy to reverse.

## What this gets you, what it doesn't

With the AES key + IV + protocol map you can:

- Decrypt every shipped firmware version offline and inspect/diff them.
- Mint OTA streams that the bootloader accepts (returns `FD A1` commit).
- Read all of the OTA stream's plaintext including the 16-byte chunk
  headers, which the existing tooling treats as discardable IVs but
  are actually structured metadata records.

What you can't easily do (yet) is **boot a modified firmware**. The
device has a separate boot-time integrity check living in
ROP-protected flash that runs before the app is allowed to start. That
gate isn't broken by anything in this writeup; it requires either
glitching or some other hardware-level work on the STM8L to bypass.

## Challenge

If you can figure out how to **boot a forged firmware** on this thing,
I'd love to hear about it. Concretely: produce an `.enc` whose
plaintext is not byte-identical to one of the 10 shipped firmwares,
flash it (the bootloader will commit it — `FD A1` — for almost any
modification), reset, and have the device actually boot the modified
code instead of locking up.

What's known about the wall:

- The validator code lives in ROP-protected flash (`$F1E0..$FFFF`) and
  isn't readable over SWIM (returns `0x71` filler).
- All 10 shipped firmware variants pass on every device, so the
  validator's reference value is global, not per-device.
- The "tag" bytes at the end of every `.enc` look like an MAC/signature
  but are actually decoration — modifying them changes nothing at boot.
- The validator's hash function is **not** any standard algorithm:
  exhaustive sweeps over CRC-16/CRC-32 polynomials, AES-CMAC variants,
  AES-CBC-MAC, MD5/SHA-1/SHA-256 truncations, Fletcher-16/32, Adler-32,
  XOR/SUM hashes, and Pearson-with-table-from-flash all produce nothing
  resembling any value found in the boot ROM dump or the flashed
  firmware bytes.
- Boot-validator coverage is byte-precise: roughly 13 specific bytes in
  block-0 of certain chunks pass freely without bricking; everything
  else either bricks at boot or aborts mid-OTA.
- ROP can't be lifted via SWIM without triggering a mass erase that
  destroys the validator code we want to read.

Open paths I haven't tried (no equipment):

- Voltage / clock glitching at the validator's compare instruction.
- Power-side-channel on the validator's MAC computation.
- Decap + electron-microscope of the mask ROM.

Or some clever software-only thing I'm missing.

## Decrypt example

Minimal Python decrypter (uses `pycryptodome`):

```python
#!/usr/bin/env python3
"""Decrypt an EQ-3 CC-RT-BLE .enc OTA file to flash-order bytes."""
import binascii, sys
from pathlib import Path
from Crypto.Cipher import AES

KEY = bytes.fromhex(
    'ad8e21f4150398dca5b175e56792b140'
    'dc8a06a873d506859f8aec7fb0da9be6'
)
INITIAL_IV = bytes.fromhex('32b8e72f89085b2a6a8bcdf7057696ac')


def parse_chunks(b):
    """Yield each chunk's body (everything except length prefix and crc)."""
    i = 0
    while i + 2 <= len(b):
        L = (b[i] << 8) | b[i + 1]
        if i + 2 + L > len(b):
            break
        yield b[i + 2: i + 2 + L][:-2]   # drop trailing 2-byte crc
        i += 2 + L


def ram_to_flash(r):
    """Per-4-byte-word rotation: ram[a,b,c,d] -> flash[d,a,b,c]."""
    out = bytearray(len(r))
    for k in range(len(r) // 4):
        out[k*4 + 0] = r[k*4 + 3]
        out[k*4 + 1] = r[k*4 + 0]
        out[k*4 + 2] = r[k*4 + 1]
        out[k*4 + 3] = r[k*4 + 2]
    return bytes(out)


def decrypt(enc_path):
    raw = binascii.unhexlify(''.join(enc_path.read_text().split()))
    # Concatenate all chunk bodies into one continuous ciphertext stream.
    full_ct = b''.join(parse_chunks(raw))
    # One CBC chain rooted at INITIAL_IV.
    full_pt = AES.new(KEY, AES.MODE_CBC, INITIAL_IV).decrypt(full_ct)
    # Apply RAM->flash rotation. Per-chunk block 0 (first 16 bytes of each
    # 144-byte chunk) is metadata and not part of the flashed firmware;
    # blocks 1-8 of each chunk are the firmware payload.
    flash = bytearray()
    n = len(full_pt) // 144
    last_size = len(full_pt) - n * 144
    for k in range(n):
        chunk_pt = full_pt[k*144 : (k+1)*144]
        flash.extend(ram_to_flash(chunk_pt[16:]))   # skip block 0
    if last_size:
        chunk_pt = full_pt[n*144:]
        flash.extend(ram_to_flash(chunk_pt[16:]))
    # Reset vector at flash $8000..$8003 isn't carried in the OTA stream;
    # the bootloader keeps it itself. Prepend the v1.05 value as a
    # convenience so flash[0] corresponds to flash address $8000.
    return bytes.fromhex('8200f927') + bytes(flash)


if __name__ == '__main__':
    enc = Path(sys.argv[1])
    out = Path(sys.argv[2]) if len(sys.argv) > 2 else enc.with_suffix('.bin')
    out.write_bytes(decrypt(enc))
    print(f'wrote {out} ({out.stat().st_size} bytes)')
```

CRC-16/CMS for crafting your own wire chunks:

```python
def crc16_cms(data, init=0xFFFF, poly=0x8005):
    crc = init
    for b in data:
        crc ^= b << 8
        for _ in range(8):
            crc = ((crc << 1) ^ poly) & 0xFFFF if crc & 0x8000 else (crc << 1) & 0xFFFF
    return crc
```

decrypted v1.05 in the decrypted folder
