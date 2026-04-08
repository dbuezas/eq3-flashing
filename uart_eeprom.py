#!/usr/bin/env python3
"""
BCM20736 EEPROM read/write via PUART HCI download mode.

Used to dump, read, or patch the BLE chip's EEPROM on EQ3 CC-RT-BLE / CC-RT-M-BLE
thermostats via the PRG2 programming header.

PRG2 pinout: pin1=3V, pin2=GND, pin3=PUART RX, pin4=PUART TX, pin5=VCC
Connect USB-UART adapter: TX→pin3, RX→pin4. Baud: 115200.

WARNING: PUART is initialized by the SPAR application firmware. If the firmware
is corrupted (e.g. by a failed bulk write), PUART becomes non-functional and the
device may be permanently bricked. Only the 'patch' command (single-byte writes)
has been tested and proven safe. The 'flash' and 'flash-fw' commands are
DANGEROUS and should not be used.

Usage:
  # Dump full EEPROM to file
  python3 uart_eeprom.py dump --port /dev/ttyUSB0 --output eeprom.bin

  # Read a region
  python3 uart_eeprom.py read --port /dev/ttyUSB0 --offset 0x3C00 --length 64

  # Patch specific bytes (SAFE — single-byte writes, proven)
  python3 uart_eeprom.py patch --port /dev/ttyUSB0 --offset 0x3C2A --value 0x8A

After running any command, power cycle the device to resume normal operation.

Protocol:
  1. Script sends HCI Reset continuously
  2. User pulls battery, waits 2s, re-inserts → ROM bootloader responds
  3. Minidriver is loaded to RAM and launched
  4. EEPROM is accessed via indirect memory map (0xFF000000 + offset)
"""
import argparse
import os
import serial
import struct
import sys
import time

EEPROM_BASE = 0xFF000000
EEPROM_SIZE = 0x10000  # 64KB
# EEPROM layout
SS1_OFFSET = 0x0000
SS2_OFFSET = 0x0100
VS_OFFSET  = 0x0140
DS1_OFFSET = 0x0580
DS2_OFFSET = 0x8000

MINIDRIVER_DIR = os.path.join(os.path.dirname(os.path.abspath(__file__)), "firmware", "minidriver")


def parse_intel_hex(path):
    """Parse Intel HEX file into (address, data) segments."""
    segments = []
    base_addr = 0
    with open(path) as f:
        for line in f:
            line = line.strip()
            if not line.startswith(':'):
                continue
            raw = bytes.fromhex(line[1:])
            byte_count = raw[0]
            addr = (raw[1] << 8) | raw[2]
            rec_type = raw[3]
            data = raw[4:4 + byte_count]
            if rec_type == 0x00:
                segments.append((base_addr + addr, data))
            elif rec_type == 0x04:
                base_addr = ((data[0] << 8) | data[1]) << 16
            elif rec_type == 0x01:
                break
    return segments


class HCITransport:
    """HCI command/event transport over serial."""

    def __init__(self, port, baud=115200):
        self.ser = serial.Serial(port, baud, timeout=0.1)

    def close(self):
        self.ser.close()

    def send_cmd(self, opcode, params=b''):
        pkt = struct.pack('<BHB', 0x01, opcode, len(params)) + params
        self.ser.write(pkt)
        self.ser.flush()

    def wait_command_complete(self, expected_opcode=None, timeout=5.0):
        """Wait for HCI Command Complete event. Returns (opcode, status, payload) or None."""
        start = time.time()
        buf = b''
        while time.time() - start < timeout:
            b = self.ser.read(1)
            if not b:
                continue
            buf += b
            while len(buf) >= 3:
                idx = buf.find(b'\x04')
                if idx == -1:
                    buf = b''
                    break
                if idx > 0:
                    buf = buf[idx:]
                if len(buf) < 3:
                    break
                plen = buf[2]
                if len(buf) < 3 + plen:
                    break
                evt_code = buf[1]
                data = buf[3:3 + plen]
                buf = buf[3 + plen:]
                if evt_code == 0x0E and len(data) >= 3:
                    opcode = data[1] | (data[2] << 8)
                    status = data[3] if len(data) > 3 else -1
                    payload = data[4:] if len(data) > 4 else b''
                    if expected_opcode is None or opcode == expected_opcode:
                        return (opcode, status, payload)
        return None

    def reset_input(self):
        self.ser.reset_input_buffer()

    def drain(self, timeout=0.5):
        start = time.time()
        while time.time() - start < timeout:
            self.ser.read(256)


def wait_for_rom(hci, timeout=60):
    """Send HCI Reset until ROM bootloader responds. User must power-cycle the device."""
    print(">>> Pull battery, wait 2s, re-insert <<<")
    hci.reset_input()
    start = time.time()
    last_print = 0
    while time.time() - start < timeout:
        # Spam HCI Reset + Download Minidriver aggressively
        hci.send_cmd(0x0C03)  # HCI Reset
        hci.send_cmd(0xFC2E)  # Download Minidriver
        r = hci.wait_command_complete(0x0C03, timeout=0.05)
        if r and r[1] == 0x00:
            elapsed = time.time() - start
            print(f"ROM bootloader detected ({elapsed:.1f}s)")
            return True
        # Also check for Download Minidriver response
        r = hci.wait_command_complete(0xFC2E, timeout=0.05)
        if r and r[1] == 0x00:
            elapsed = time.time() - start
            print(f"ROM bootloader detected via DL Minidriver ({elapsed:.1f}s)")
            return True
        elapsed = time.time() - start
        if elapsed - last_print >= 10:
            print(f"  Still waiting... ({elapsed:.0f}s)")
            last_print = elapsed
    print("Timeout waiting for ROM bootloader.")
    return False


def load_minidriver(hci):
    """Load and launch the WP-disable minidriver."""
    hex_path = os.path.join(MINIDRIVER_DIR, "uart_DISABLE_EEPROM_WP_PIN1.hex")
    if not os.path.exists(hex_path):
        print(f"Minidriver not found: {hex_path}")
        return False

    segments = parse_intel_hex(hex_path)
    entry_point = segments[0][0]

    # Download Minidriver command
    hci.send_cmd(0xFC2E)
    r = hci.wait_command_complete(0xFC2E, timeout=5.0)
    if not r or r[1] != 0:
        print(f"Download Minidriver command failed: {r}")
        return False

    # Write minidriver to RAM
    for addr, data in segments:
        offset = 0
        while offset < len(data):
            chunk = data[offset:offset + 247]
            params = struct.pack('<I', addr + offset) + bytes(chunk)
            hci.send_cmd(0xFC4C, params)
            r = hci.wait_command_complete(0xFC4C, timeout=2.0)
            if not r or r[1] != 0:
                print(f"Write RAM failed at 0x{addr + offset:08X}")
                return False
            offset += len(chunk)

    # Launch minidriver
    hci.send_cmd(0xFC4E, struct.pack('<I', entry_point))
    time.sleep(2.0)
    hci.drain()
    print("Minidriver running")
    return True


def read_eeprom(hci, offset, length):
    """Read bytes from EEPROM. Returns bytes or None."""
    params = struct.pack('<IB', EEPROM_BASE + offset, length)
    hci.send_cmd(0xFC4D, params)
    r = hci.wait_command_complete(0xFC4D, timeout=10.0)
    if r and r[1] == 0:
        return r[2]
    return None


def write_eeprom(hci, offset, data):
    """Write bytes to EEPROM. Returns True on success."""
    params = struct.pack('<I', EEPROM_BASE + offset) + data
    hci.send_cmd(0xFC4C, params)
    r = hci.wait_command_complete(0xFC4C, timeout=10.0)
    return r is not None and r[1] == 0


def enter_download_mode(hci):
    """Enter download mode and load minidriver."""
    if not wait_for_rom(hci):
        return False
    if not load_minidriver(hci):
        return False
    # Verify EEPROM access works
    data = read_eeprom(hci, 0x0000, 4)
    if data is None:
        print("EEPROM read test failed!")
        return False
    print(f"EEPROM access verified (SS1: {data.hex()})")
    return True


def cmd_dump(args):
    """Dump full EEPROM to file."""
    hci = HCITransport(args.port)
    try:
        if not enter_download_mode(hci):
            return 1

        print(f"Dumping EEPROM ({EEPROM_SIZE // 1024}KB)...")
        dump = bytearray()
        chunk_size = 240

        for offset in range(0, EEPROM_SIZE, chunk_size):
            remaining = min(chunk_size, EEPROM_SIZE - offset)
            data = read_eeprom(hci, offset, remaining)
            if data:
                dump.extend(data)
            else:
                print(f"  Read failed at 0x{offset:04X}, padding with 0xFF")
                dump.extend(b'\xFF' * remaining)

            pct = (offset * 100) // EEPROM_SIZE
            if pct % 10 == 0 and offset > 0 and offset % (EEPROM_SIZE // 10) < chunk_size:
                print(f"  {pct}%")

        with open(args.output, 'wb') as f:
            f.write(dump)
        print(f"Saved {len(dump)} bytes to {args.output}")
        return 0
    finally:
        hci.close()


def cmd_flash(args):
    """Flash a full EEPROM image.
    WARNING: EXPERIMENTAL AND DESTRUCTIVE. This overwrites the entire EEPROM
    including device identity (MAC address, pairing data, NVRAM).
    Only use to restore the SAME device from its own backup.
    A failed write can make the device unrecoverable via PUART."""
    image = open(args.input, 'rb').read()
    print("WARNING: This overwrites the ENTIRE EEPROM including device identity.")
    print("A failed write can make the device unrecoverable via PUART.")
    print("Make sure you have a dump backup first!")
    resp = input("Continue? (yes/no): ")
    if resp.strip().lower() != 'yes':
        print("Aborted.")
        return 0
    if len(image) != EEPROM_SIZE:
        print(f"Warning: image is {len(image)} bytes, expected {EEPROM_SIZE}")

    hci = HCITransport(args.port)
    try:
        if not enter_download_mode(hci):
            return 1

        print(f"Writing {len(image)} bytes to EEPROM...")
        chunk_size = 240

        for offset in range(0, len(image), chunk_size):
            chunk = image[offset:offset + chunk_size]
            if not write_eeprom(hci, offset, chunk):
                print(f"  Write failed at 0x{offset:04X}!")
                return 1
            pct = (offset * 100) // len(image)
            if pct % 10 == 0 and offset > 0 and offset % (len(image) // 10) < chunk_size:
                print(f"  {pct}%")

        # Verify
        print("Verifying...")
        errors = 0
        for offset in range(0, len(image), chunk_size):
            remaining = min(chunk_size, len(image) - offset)
            readback = read_eeprom(hci, offset, remaining)
            if readback != image[offset:offset + remaining]:
                print(f"  Mismatch at 0x{offset:04X}!")
                errors += 1
        if errors:
            print(f"VERIFICATION FAILED: {errors} mismatches!")
            return 1
        print("Verified OK!")
        return 0
    finally:
        hci.close()


def cmd_flash_fw(args):
    """Flash a BLE firmware .bin file to DS1.
    WARNING: EXPERIMENTAL. A failed write can corrupt the firmware header,
    making the device unrecoverable via PUART. Always dump first.
    The .bin file is written as-is (including any OTA header) since the
    EEPROM DS1 region stores the complete file verbatim."""
    fw_data = open(args.input, 'rb').read()
    print("WARNING: This is a destructive operation. If the write fails")
    print("partially, the device may become unrecoverable via PUART.")
    print("Make sure you have a dump backup first!")
    resp = input("Continue? (yes/no): ")
    if resp.strip().lower() != 'yes':
        print("Aborted.")
        return 0

    max_ds_size = DS2_OFFSET - DS1_OFFSET
    if len(fw_data) > max_ds_size:
        print(f"Firmware too large: {len(fw_data)} > {max_ds_size}")
        return 1

    hci = HCITransport(args.port)
    try:
        if not enter_download_mode(hci):
            return 1

        print(f"Writing firmware ({len(fw_data)} bytes) to DS1 at 0x{DS1_OFFSET:04X}...")
        chunk_size = 240

        for offset in range(0, len(fw_data), chunk_size):
            chunk = fw_data[offset:offset + chunk_size]
            if not write_eeprom(hci, DS1_OFFSET + offset, chunk):
                print(f"  Write failed at DS1+0x{offset:04X}!")
                return 1
            pct = (offset * 100) // len(fw_data)
            if pct % 10 == 0 and offset > 0 and offset % max(1, len(fw_data) // 10) < chunk_size:
                print(f"  {pct}%")

        # Verify
        print("Verifying...")
        errors = 0
        for offset in range(0, len(fw_data), chunk_size):
            remaining = min(chunk_size, len(fw_data) - offset)
            readback = read_eeprom(hci, DS1_OFFSET + offset, remaining)
            if readback != fw_data[offset:offset + remaining]:
                print(f"  Mismatch at DS1+0x{offset:04X}!")
                errors += 1
        if errors:
            print(f"VERIFICATION FAILED!")
            return 1
        print("Verified OK!")
        return 0
    finally:
        hci.close()


def cmd_patch(args):
    """Patch specific bytes in EEPROM."""
    hci = HCITransport(args.port)
    try:
        if not enter_download_mode(hci):
            return 1

        offset = int(args.offset, 0)
        value = int(args.value, 0)

        # Read current
        current = read_eeprom(hci, offset, 1)
        if current is None:
            print(f"Failed to read 0x{offset:04X}")
            return 1
        print(f"Current: EEPROM[0x{offset:04X}] = 0x{current[0]:02X}")

        if current[0] == value:
            print("Already has the target value, nothing to do.")
            return 0

        # Write
        if not write_eeprom(hci, offset, bytes([value])):
            print("Write failed!")
            return 1

        # Verify
        readback = read_eeprom(hci, offset, 1)
        if readback and readback[0] == value:
            print(f"Patched: 0x{current[0]:02X} -> 0x{value:02X} (verified)")
        else:
            print(f"VERIFICATION FAILED! Readback: {readback}")
            return 1
        return 0
    finally:
        hci.close()


def cmd_read(args):
    """Read and display a region of EEPROM."""
    hci = HCITransport(args.port)
    try:
        if not enter_download_mode(hci):
            return 1

        offset = int(args.offset, 0)
        length = int(args.length, 0)

        print(f"Reading EEPROM 0x{offset:04X}-0x{offset + length - 1:04X} ({length} bytes):")
        data = bytearray()
        for off in range(0, length, 240):
            remaining = min(240, length - off)
            chunk = read_eeprom(hci, offset + off, remaining)
            if chunk:
                data.extend(chunk)
            else:
                print(f"  Read failed at 0x{offset + off:04X}")
                return 1

        for i in range(0, len(data), 16):
            addr = offset + i
            row = data[i:i + 16]
            hexstr = ' '.join(f'{b:02x}' for b in row)
            ascstr = ''.join(chr(b) if 32 <= b < 127 else '.' for b in row)
            print(f"  {addr:04X}: {hexstr:<48} {ascstr}")
        return 0
    finally:
        hci.close()


def main():
    parser = argparse.ArgumentParser(
        description="BCM20736 EEPROM tool via PUART (PRG2 header)")
    sub = parser.add_subparsers(dest='command', required=True)

    # Common port argument added to each subcommand
    port_arg = {'flags': ['--port', '-p'], 'kwargs': dict(required=True, help="Serial port (e.g., /dev/ttyUSB0)")}

    p_dump = sub.add_parser('dump', help='Dump full EEPROM to file')
    p_dump.add_argument(*port_arg['flags'], **port_arg['kwargs'])
    p_dump.add_argument('--output', '-o', required=True, help='Output file')

    p_flash = sub.add_parser('flash', help='Flash full EEPROM image')
    p_flash.add_argument(*port_arg['flags'], **port_arg['kwargs'])
    p_flash.add_argument('--input', '-i', required=True, help='EEPROM image file')

    p_flash_fw = sub.add_parser('flash-fw', help='Flash BLE firmware .bin to DS1')
    p_flash_fw.add_argument(*port_arg['flags'], **port_arg['kwargs'])
    p_flash_fw.add_argument('--input', '-i', required=True, help='BLE firmware .bin file')

    p_patch = sub.add_parser('patch', help='Patch a single byte')
    p_patch.add_argument(*port_arg['flags'], **port_arg['kwargs'])
    p_patch.add_argument('--offset', required=True, help='EEPROM offset (hex)')
    p_patch.add_argument('--value', required=True, help='New value (hex)')

    p_read = sub.add_parser('read', help='Read and display EEPROM region')
    p_read.add_argument(*port_arg['flags'], **port_arg['kwargs'])
    p_read.add_argument('--offset', default='0x0000', help='Start offset (hex)')
    p_read.add_argument('--length', default='256', help='Bytes to read')

    args = parser.parse_args()

    print("=== BCM20736 EEPROM Tool ===")
    print(f"Port: {args.port}\n")

    commands = {
        'dump': cmd_dump,
        'flash': cmd_flash,
        'flash-fw': cmd_flash_fw,
        'patch': cmd_patch,
        'read': cmd_read,
    }
    sys.exit(commands[args.command](args))


if __name__ == '__main__':
    main()
