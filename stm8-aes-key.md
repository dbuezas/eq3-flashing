# Reverse engineering the EQ-3 CC-RT-BLE OTA

I extracted the following from the EQ-3 CC-RT-BLE radiator thermostat
firmware update process. The OTA pipeline is fully understood, the AES-256
key + IV are recoverable, **and — as of 2026-07-08 — the boot-time integrity
wall is defeated: a modified firmware now boots and runs on the device.**
See [**SOLVED: booting a forged firmware**](#solved-2026-07-08-booting-a-forged-firmware)
below; the old "Challenge" section is left in place as the record of what the
wall looked like before it fell.

![Flash map of the STM8L052C6: OTA-delivered app (green, $9100–$FA56, byte-exact and address-contiguous), the resident UBC and per-build gap the OTA never carries (red, ROP-locked — the CRC algorithm runs here), and the 2-byte integrity stamp at $FFFE. The boot check is a self-verifying CRC-16/0x8005 over $9100–$FFFF including the stamp; it forges differentially (init/xorout/resident all cancel), proven on-device by changing the reported version byte 0x78→0x99 and booting.](flash_structure.svg)

## SOLVED (2026-07-08): booting a forged firmware

**The boot wall is a self-verifying CRC-16, and it uses the same `0x8005`
polynomial as the OTA chunk CRC** (non-reflected). It runs over the byte-exact
runtime image, address-contiguous, from the start of the delivered app up to
**and including** the 2-byte stamp at `$fffe:$ffff`. "Self-verifying" means the
stamp bytes are picked so the CRC of the whole region — its own stamp included —
equals a fixed constant; at boot the validator recomputes it and refuses (`UPD`)
on any mismatch.

**You do not need the resident code, the init value, or the final XOR to forge.**
That is the whole trick, and it's why the ROP lock never mattered:

CRC is linear, so for two equal-length images `A` and `B`,
`CRC(A) XOR CRC(B) = CRC0(A XOR B)` where `CRC0` is the `init=0, xorout=0` core.
Every unknown — the real init, the final XOR, the ROP-locked UBC below the app,
the unwritten upper pages — is **identical between the stock firmware and your
edit**, so it cancels. Only the bytes you actually changed survive the XOR.

So, to boot an edit:

1. De-frame **byte-exactly** — decrypt the continuous chain and keep the 12-byte
   frame *and* the 4 content bytes per record, placing content address-contiguous
   (this repo's `transport_stream`/`deframe` payload-only shortcut is **not**
   enough; use the byte-exact de-framer in the companion `eq3-ota` repo).
2. Apply your content edit(s).
3. Choose the two stamp bytes at `$fffe:$ffff` so
   `CRC0_8005(edited[start..$ffff]) == CRC0_8005(stock[start..$ffff])`
   (only 65536 possibilities — or solve the last two bytes directly).
4. Re-encrypt the continuous chain, re-chunk to the original body lengths,
   recompute the per-chunk CRC-16/CMS, flash.

No resident dump, no glitching.

**Why every prior CRC sweep came up empty** — two pitfalls, both about the
*input*, not the algorithm:

- **Wrong image.** Payload-only de-framing (and the page-head-writing scatter
  model further down) don't produce the bytes the validator actually hashes.
  The validator hashes the byte-exact, address-contiguous image — the one you
  only get once you recover the 4 content bytes per record that per-record
  decryption drops. CRC over the wrong bytes never matches, for any polynomial.
- **Cross-length differential.** Sweeping `CRC(content) == stamp` *across
  versions* fails because the versions are **different lengths**, and a
  length-varying differential is not linear. The fix is to only difference
  **same-length, same-layout** version pairs — here `1.10`↔`1.20` and
  `1.46`↔`1.48`. For those, `stampA XOR stampB == CRC0_8005(imgA XOR imgB)`
  holds exactly (`1.10^1.20 → 0x1c50`, `1.46^1.48 → 0x9383`), which pins the
  polynomial to `0x8005` and the region to `[start .. $ffff]`. (Differencing
  the *delivered-minus-gap* image matches neither pair — that's how the region's
  exact extent is fixed to the full address-contiguous span.)

**Proof, on-device.** I forged v1.20 with its reported **firmware-version byte**
changed from `0x78` to `0x99`. (The version is the immediate operand of the
cmd-`0x00` reply builder `a6 fd 6b 01 a6 01 6b 02 a6 <VER> 6b 03`; that operand
equals the version integer in all six firmwares — `1.05→0x69 … 1.20→0x78 …
1.48→0x94` — so it is genuinely the version, verified across builds.) I
recomputed the stamp as above, flashed, and the device **booted and reported
version `0x99`**: `cmd 0x00 -> 0199...`, where stock is `0178...`. `0x99` = 153
is an impossible stock version, so the readout can only be the forgery. An inert
padding byte at `$ffd0` + recomputed stamp booted identically. The `UPD` wall is
gone.

This also reconciles the old observations: the CRC covers 100% of delivered
content — every code/data byte including the last page's `0xff` padding, right up
to the stamp — which matches the "no coverage hole" result below; it is simply a
plain linear CRC, and the "chain-following custom/keyed hash" reading was an
artifact of hashing the wrong (page-head-bearing) image, not a real keyed function.

Minimal forge helper (pair it with the byte-exact de-framer):

```python
def crc0_8005(data):                 # CRC-16/0x8005, non-reflected, init=0, xorout=0
    c = 0
    for x in data:
        c ^= x << 8
        for _ in range(8):
            c = ((c << 1) ^ 0x8005) & 0xFFFF if c & 0x8000 else (c << 1) & 0xFFFF
    return c

def _step(c, x):                     # one CRC0 byte-step (to solve the final two bytes)
    c ^= x << 8
    for _ in range(8):
        c = ((c << 1) ^ 0x8005) & 0xFFFF if c & 0x8000 else (c << 1) & 0xFFFF
    return c

def fix_stamp(edited, stock, start=0x9100):
    """edited/stock: byte-exact $0000-indexed flash images (bytearray). The edit is
    already applied to `edited` everywhere except its $fffe:$ffff stamp. Sets that
    stamp so the device boots. `start` cancels out — any value <= the first edit works."""
    target = crc0_8005(bytes(stock[start:0x10000]))   # the region constant a valid build hits
    prefix = crc0_8005(bytes(edited[start:0xfffe]))    # CRC up to (not incl) the stamp
    for a in range(256):
        pa = _step(prefix, a)
        for b in range(256):
            if _step(pa, b) == target:
                edited[0xfffe], edited[0xffff] = a, b
                return edited
    raise RuntimeError('unreachable for a 16-bit CRC')
```

Everything below predates the crack and is kept for context.

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

The whole `.enc` is **one continuous AES-256-CBC chain** rooted at
`INITIAL_IV`, chunked into length-prefixed records. Each record's first 16
bytes *look* like a per-record IV — and you can decrypt each record on its
own with `body[0:16]` as the IV — but that's a decoding shortcut that
**silently drops 4 bytes of real content per record**. Decrypt the
continuous chain instead. Then each record starts with a **12-byte frame**:
the constant magic `98 fe 87 39` followed by streaming-writer state — a
scatter command (`32`/`33`), the 16-bit **write pointer** (`+120`/record,
= RAM `$07b`) and the **carry** counter (`+8`/record, = RAM `$07e`; 120+8 =
128 = one page per 16 records). The **13th byte onward is the actual
firmware content** — and those first 4 content bytes are exactly what
per-record decryption discards (it's why a naive de-frame comes out ~4
bytes/record short and never lands byte-exact). The bootloader decrypts the
continuous chain and relies on the `98 fe 87 39` magic being where it
expects on every record.

**A per-record re-encrypt of an edit is what makes a flash get refused.**
If you change a content byte and re-encrypt only that record (reusing its
stored 16 bytes as an IV), that record's ciphertext changes — and in the
continuous chain it is the CBC input for the *next* record's frame, so the
next frame's magic decrypts to garbage and **the bootloader rejects the
flash**: it stops acking chunks (`a1 22`) and returns `a0 11` exactly one
record after your edit, never sending the `a1 44` finish. A correctly
edited firmware flashes fine — you just have to **re-encrypt the whole
continuous chain** (decrypt continuous → edit content only → re-encrypt
continuous → re-chunk to the original body lengths → recompute the
per-record CRC-16/CMS). *(Confirmed on-device 2026-07-07: a per-record-edited
1.20 with one changed byte is rejected at the next record; the identical edit
re-encrypted as the continuous chain flashes clean and commits — `a1 44`. It
then hits the separate boot wall below.)*

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

The bootloader code lives in SWIM-blocked flash (reads return `0x71`
filler) so you can't read the binary directly, but it has to load the key
into addressable RAM to use it — and that RAM is readable.

## UART access (BLE chip removal)

The thermostat's STM8L doesn't talk BLE itself — there's a separate BLE
chip on the same board that handles BLE radio and exchanges UART frames
with the STM8L over USART1.

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

## Flash layout: it's a scatter-load, not a linear image

This one tripped me up for a long time, and I originally got it wrong (an
earlier version of this writeup claimed a "4-byte word rotation" — that was
a mistake; there is **no** rotation, and applying one scrambles real code).

The decrypted stream is **not** a flat image you concatenate at `$8000` —
it's a **relocatable scatter-load**. The cleanest way to model it is exactly
how the resident UBC flasher does it: a **streaming writer with ~2 KB RAM and
one flash write-pointer** that reacts to four framing tokens and copies
everything else to `flash[ptr++]`:

```
32 00 00 HI LO B1 B2   PAGE     → seek ptr = dst($HILO); write the 4-byte
                                   page tag [HI LO 00 B2] at dst; ptr = dst+4
33 00 00 HI LO         TRAILER  → end-of-page sync; skip 5 bytes
31 00 00 HI LO 00 N    SEEK-GAP → skip N pages of the RESIDENT gap
                                   (never written); N = pages to skip
30 <4-byte build-tag>  WATERMARK→ per-build marker (~26×); skip 5 bytes
```

`HI:LO` is a page-aligned destination. The targets ramp `$9200 → $ff80` in
`$80` (128-byte page) steps, with twelve `+$180` (384) **group-gap** jumps
where one descriptor's payload keeps streaming past its trailer into the next
two pages — no special-casing needed, the next `32` re-seeks. `B2` is a
**carrier-group-local page counter** (`77 6f 67 … 07`, −8 each page, resetting
to `77` at every group-gap; **14 groups** per image), **not** a checksum. The
4-byte page heads, the group-gap boundary bytes, and the `30/31/33` token
fields are all OTA bookkeeping, not firmware code.

The single `31` seek-gap is what leaves the top of flash resident. For v1.10
it says "skip 11 pages from `$fa00`", jumping straight to the closing
`32 00 00 ff 80` — the last page, which carries the 2-byte integrity stamp at
`$fffe`. **The seek-gap is firmware-specific:** a longer build's app extends
further up before the gap (v1.46 reaches `$fd00`; v1.10 only `$fa00`), so the
region no OTA ever writes shrinks to as little as `$fd00..$ff7f` (640 B) for
the longest firmwares. (Verified: `N == (0xff80 − dst)/128` for all six.)

So the runtime image lives at **`$9200..$ff80`**. `$8000..$9200` is the
**UBC** (User Boot Code; write-protected, UBC option byte `0x22`) and is
**not carried in the OTA** — that's where the reset vector and the boot
validator live.

De-framed like this, the code reads as clean STM8 — e.g. the flash-unlock
`35 56 50 52 35 ae 50 52` and the watchdog-key routine `mov $50e0,#$cc`.
(Under the old "rotate every word" model those exact bytes decode to
garbage, which is how I finally realised the rotation model was wrong.)

## What this gets you, what it doesn't

With the AES key + IV + protocol map you can:

- Decrypt every shipped firmware version offline, de-frame the scatter-load
  (see above), and inspect/diff the real runtime image.
- Mint OTA streams that the bootloader accepts and commits — **but only if
  you re-encrypt through the continuous chain** (see "What's inside"); a
  per-record re-encrypt of an edit is rejected at the next record.
- Read the OTA stream's full plaintext — but decode it as the **continuous
  chain**, not per-record. Per-record decoding treats each record's first 16
  bytes as an inert IV; in the continuous chain those bytes are a **12-byte
  frame** (`98 fe 87 39` magic + write-pointer + carry) followed by **4 bytes
  of real content**, so per-record decoding silently loses 4 content bytes
  per record. (The earlier note that these blocks "carry no integrity
  information" was also wrong: the `98 fe 87 39` magic is the chain's
  integrity check — a content edit not re-encrypted through the continuous
  chain corrupts the next frame and the bootloader refuses the flash.)

Booting a modified firmware **used to** be the open problem — it no longer is;
see [SOLVED](#solved-2026-07-08-booting-a-forged-firmware) above. The boot-time
check is a self-verifying CRC-16/`0x8005` over the byte-exact image up to and
including its 2-byte stamp at `$FFFE`, and it forges without ever reading the
resident algorithm (CRC linearity cancels every unknown). The paragraph that
used to sit here — "you can't recompute a valid value without a hardware dump"
— was wrong: you can, differentially, from the six shipped builds alone.

## Challenge (SOLVED — see [above](#solved-2026-07-08-booting-a-forged-firmware))

*This section framed the wall before it fell. The answer turned out to be a
self-verifying CRC-16/`0x8005`; the "not any standard checksum" conclusion below
was an artifact of hashing the wrong (payload-only / page-head-bearing) image and
of differencing across unequal-length builds. Kept verbatim as the record.*

If you can figure out how to **boot a forged firmware** on this thing,
I'd love to hear about it. Concretely: produce an `.enc` whose
plaintext is not byte-identical to one of the 10 shipped firmwares,
flash it (the bootloader will commit it — `FD A1` — for almost any
modification), reset, and have the device actually boot the modified
code instead of locking up.

What's known about the wall:

- **The validator hashes only the delivered pages, firmware-specifically —
  it is not a linear scan of all flash.** Proven on-device: flashing a short
  build (v1.10, app ends `$fa00`) over a long one (v1.46, app ends `$fd00`)
  boots fine, even though v1.10's seek-gap never rewrites `$fa00..$fd00`, so
  those pages keep stale v1.46 bytes. If the hash covered that region it would
  mismatch → `UPD`. It doesn't. So the validator is **chain-following**: it
  walks the page heads (using the `B2` carrier-group counter to know where the
  app ends), hashes the payloads, skips the seek-gap, and stops at the last
  page. When the resident code is finally read, this is its fingerprint: code
  that reads the page-head countdown, hashes payloads, and skips the gap.
- The validator *algorithm* lives in resident flash the OTA never carries:
  the write-protected UBC (`$8000..$9200`, 4.25 KB) and possibly the small
  common seek-gap `$fd00..$ff7f` (640 B — the *only* upper region no build's
  app overwrites; everything below it, `$fa00..$fd00`, is real app for the
  longer builds, so nothing permanent can live there). SWIM reads of flash are
  blocked (`0x71` filler). A byte-exact streaming-receiver model shows the whole
  OTA receiver uses only ~414 B of the 2 KB RAM, and the resident region has
  ample room for a **table-driven or keyed** hash — so nothing about the chip's
  resources forced a simple checksum.
- The reference is a 2-byte value per firmware version at `$FFFE`, embedded in
  the OTA content — same across devices (per-version, not per-device) and
  identical between the CC-RT-BLE and CC-RT-M-BLE variants (whose runtime code
  differs in only ~24 group-gap boundary-tag bytes, all skipped by the hash).
  It's stored **self-consistently**: the last page is hashed *including* its own
  stamp bytes (edit the stamp → `UPD`).
- **The skip mask is device-verified from three independent angles that all
  agree:** 900+ single-byte forges (boot vs `UPD`), the BLE/MBLE collision (the
  ~24 bytes that differ between variants yet share a stamp), and
  "alive-at-any-value" probes. Result: the boot hash covers **100% of real
  firmware content** — every code/data byte, *including* the last page's `0xff`
  padding, up to the stamp — and skips exactly the OTA bookkeeping: the 4-byte
  page heads (`HI LO 00 B2`), the group-gap boundary tags (a fixed 2-byte
  per-build value, e.g. `a2 77` in v1.10, at each of the 12 gaps), and transport
  framing (which isn't even flashed). **No firmware content byte is skippable**
  — there is no coverage hole to exploit.
- The reference is **not** any standard checksum. On byte-exact content over the
  exactly-correct per-version range, exhaustive sweeps come up empty:
  CRC-8/16/24/32 (all params, incl. `delsum` full init/xorout solving on the
  varying-length images and the 10 samples / 4 collisions the M-variants add);
  modsum, Fletcher, Adler; polyhash and FNV **including brute-forced secret
  16-bit inits**; additive-SUM/XOR; position- and counter-weighted hashes;
  per-page and per-carrier-group hashes; multiply-scrambled ("hash-then-encrypt")
  forms; AES-CBC-MAC/CMAC with the OTA key; and Pearson built from the AES
  S-box. So it's a custom or *keyed* 16-bit function whose secret (algorithm
  and/or a dedicated table/key) sits in the resident region.
- There are only 6 `(content → reference)` pairs — the M-variants collapse onto
  the BLE content once the boundary tags are masked, adding no new information
  — and the on-device oracle is 1 bit (boot vs `UPD`). 6 × 16 = 96 bits is far
  too little to reverse a function that folds in a ≥2048-bit table; it's
  information-theoretically underdetermined, not merely hard.
- ROP can't be lifted via SWIM without a mass erase that destroys the resident
  code. Voltage-glitch dump attempts so far read back only the injected payload
  (NOP sleds / spin loops), not real flash — ROP is still intact.

(An earlier version of this section put the validator in `$F1E0..$FFFF` and
described a per-chunk "block-0" content hash with ~13 free bytes. Both were
artifacts of the wrong rotation/sequential reconstruction — not correct.)

Attack surface / open paths:

- **Voltage / clock glitching** at the validator's compare (or at the ROP
  check to lift read protection). I've tried this without success so far —
  it's still the most promising avenue, just not landed yet.
- **Power / EM side-channel** on the validator's checksum computation, to
  recover the algorithm or the reference.
- Note the resident code lives in **flash, not mask ROM**, so decap +
  optical/EM imaging won't read it out (flash stores charge, not physical
  structure) — this isn't a decap-the-ROM situation.

Or some clever software-only thing I'm missing.

## Decrypt example

Minimal Python decrypter (uses `pycryptodome`):

```python
#!/usr/bin/env python3
"""De-frame an EQ-3 CC-RT-BLE .enc OTA into its true runtime flash image.

Scatter-load, NO word rotation. Decrypt each record under its own IV, then
replay the stream exactly as the resident UBC flasher does: a single-pass
streaming writer with one flash pointer, reacting to four framing tokens
(32 page / 33 trailer / 31 seek-gap / 30 watermark). Runtime image spans
$9200..$ff80 ($8000..$9200 is the resident UBC).
"""
import binascii, sys
from collections import Counter
from pathlib import Path
from Crypto.Cipher import AES

KEY = bytes.fromhex(
    'ad8e21f4150398dca5b175e56792b140'
    'dc8a06a873d506859f8aec7fb0da9be6'
)
INITIAL_IV = bytes.fromhex('32b8e72f89085b2a6a8bcdf7057696ac')


def transport_stream(enc_path):
    """Decrypt each record under its own IV (= the first 16 bytes of the body) and
    concatenate the payloads -> the clean scatter stream.

    NB: this per-record shortcut is LOSSY. The real structure is one continuous CBC
    chain under INITIAL_IV; decrypting it that way recovers, before each record's
    payload, a 12-byte frame (magic `98 fe 87 39` + write-pointer + carry) AND 4
    content bytes that this per-record decode drops (the `32 00 00` "descriptor hits"
    that look like noise are those real frames). For clean payload-only scatter
    de-framing the per-record output is convenient; for a byte-exact reconstruction
    decode the continuous chain and keep the 12-byte-frame + full content per record.
    """
    raw = binascii.unhexlify(''.join(enc_path.read_text().split()))
    out = bytearray()
    i = 0
    while i + 2 <= len(raw):
        L = (raw[i] << 8) | raw[i + 1]
        if i + 2 + L > len(raw):
            break
        body = raw[i + 2:i + 2 + L]                 # 16-byte IV | ciphertext | 2-byte CRC
        out += AES.new(KEY, AES.MODE_CBC, body[0:16]).decrypt(body[16:-2])
        i += 2 + L
    return bytes(out)


def _watermark_tag(stream):
    """The per-build 4-byte tag that follows every 0x30 watermark marker."""
    return Counter(bytes(stream[k+1:k+5]) for k in range(len(stream) - 5)
                   if stream[k] == 0x30).most_common(1)[0][0]


def deframe(stream):
    """Faithful streaming UBC-flasher: one pass, one write-pointer, four framing
    tokens; everything else is copied to flash[ptr++]. Group-gaps need no special
    case (the payload just keeps streaming until the next 32 re-seeks); the 31
    seek-gap is skipped so the resident region stays untouched (0xff here)."""
    tag = _watermark_tag(stream)
    n = len(stream)
    def is_page(k):       # 32 00 00 HI LO B1 B2, dst page-aligned in the runtime range
        return (k + 7 <= n and stream[k] == 0x32 and stream[k+1] == 0 and stream[k+2] == 0
                and 0x9200 <= ((stream[k+3] << 8) | stream[k+4]) <= 0xff80
                and (((stream[k+3] << 8) | stream[k+4]) & 0x7f) == 0)
    def is_seekgap(k):    # 31 00 00 HI LO 00 N  -> skip the resident gap
        return k + 7 <= n and stream[k] == 0x31 and stream[k+1] == 0 and stream[k+2] == 0
    def is_trailer(k):    # 33 00 00 HI LO
        return k + 5 <= n and stream[k] == 0x33 and stream[k+1] == 0 and stream[k+2] == 0
    def is_mark(k):       # 30 <tag>
        return k + 5 <= n and stream[k] == 0x30 and bytes(stream[k+1:k+5]) == tag

    flash = bytearray(b'\xff' * 0x10000)
    # head region (app IVT + boot glue) before the first page header streams to
    # just below $9200; count its non-marker length to fix the start pointer.
    first = next(k for k in range(n) if is_page(k))
    body = 0; m = 0
    while m < first:
        if is_mark(m):
            m += 5
        else:
            body += 1; m += 1
    ptr = 0x9200 - body

    i = 0
    while i < n:
        if is_page(i):
            dst = (stream[i+3] << 8) | stream[i+4]
            flash[dst] = stream[i+3]; flash[dst+1] = stream[i+4]
            flash[dst+2] = stream[i+5]; flash[dst+3] = stream[i+6]   # HI LO B1 B2
            ptr = dst + 4; i += 7; continue
        if is_seekgap(i):
            i += 7; continue                            # resident gap -> untouched
        if is_trailer(i):
            i += 5; continue
        if is_mark(i):
            i += 5; continue
        if 0 <= ptr < 0x10000:
            flash[ptr] = stream[i]; ptr += 1
        i += 1
    return flash


if __name__ == '__main__':
    enc = Path(sys.argv[1])
    flash = deframe(transport_stream(enc))
    out = Path(sys.argv[2]) if len(sys.argv) > 2 else enc.with_suffix('.bin')
    out.write_bytes(bytes(flash[0x8000:0x10000]))   # $8000-based; $9200..$ff80 meaningful
    print(f'wrote {out}')
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

## Decrypted firmwares

The 10 shipped firmware variants are pre-decrypted in
[`decrypted-stm8/`](decrypted-stm8/) as `.fullpt` files — the raw
continuous AES-CBC plaintext, i.e. the **transport stream before
de-framing** (it still contains the `32 00 00 …` / `33 00 00 …` scatter
descriptors). Useful for protocol-level inspection; de-frame them (see the
code above) to get the `$9200..$ff80` runtime image.

Files:

- `v1.05_CC-RT-BLE.fullpt`
- `v1.06_CC-RT-BLE.fullpt`
- `v1.10_CC-RT-BLE.fullpt`, `v1.10_CC-RT-M-BLE.fullpt`
- `v1.20_CC-RT-BLE.fullpt`, `v1.20_CC-RT-M-BLE.fullpt`
- `v1.46_CC-RT-BLE.fullpt`, `v1.46_CC-RT-M-BLE.fullpt`
- `v1.48_CC-RT-BLE.fullpt`, `v1.48_CC-RT-M-BLE.fullpt`

To get the runtime `.bin`, run the de-framer above on the original `.enc`
(or on a `.fullpt` — feed it to `deframe()` directly, skipping the decrypt
step). There is no rotation and nothing to "strip" — the descriptors are
consumed by the de-framing, and the payloads land at their targets.
