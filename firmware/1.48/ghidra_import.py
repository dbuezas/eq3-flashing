#!/usr/bin/env python3
"""
Ghidra import helper for EQ3 BLE firmware.

Prepares the firmware binary for Ghidra import by stripping the OTA header
and providing the correct load parameters.

Ghidra settings:
  Processor: ARM:LE:32:Cortex
  Base address: 0x00200000
  File: ble_CC-RT-BLE_code.bin (output of this script)

After import:
  1. Mark 0x00200000-0x002038FF as code (.text)
  2. Mark 0x00200900-0x00203BFF as code (additional)
  3. Mark 0x00203C00-0x00204A00 as data (.rodata - strings)
  4. Mark 0x00203880-0x00203C00 as data (GATT DB)
  5. Set entry point at the first function prologue
  6. Run Auto-Analysis

Known ROM function addresses (BCM20736):
  These are BL targets that land in 0x00000000-0x0005FFFF range.
  Apply labels from the WICED Smart SDK ROM symbol table.

Key string-referenced functions (approximate):
  "create()" → application_create() entry point
  "puart_initialization()" → PUART debug setup
  "trv_ble_connection_up" → BLE connection handler
  "trv_ble_connection_down" → BLE disconnection handler
  "Pack ADV Field perform" → ADV data builder
  "Transmission of Internals detected" → MCU internal data handler
  "Transmission of PAIRING detected" → MCU pairing command handler
  "CRC-Check successful" / "FAILED" → UART CRC verifier
  "ble_control[0-18]= %x" → UART relay debug output
  "ws_upgrade_init" → OTA initialization
"""
import os, struct, sys

# Input: OTA firmware .bin file
fw_path = sys.argv[1] if len(sys.argv) > 1 else os.path.join(
    os.path.dirname(__file__), 'noauth', 'ble_CC-RT-BLE.bin')

fw = open(fw_path, 'rb').read()

# Strip 4-byte OTA header if present (v1.20+)
if fw[:4] == b'\x18\x01\x00\x00':
    print(f"Stripping 4-byte OTA header")
    fw = fw[4:]
elif fw[:2] == b'\xa2\x1a':
    print(f"No OTA header (v1.05/1.10 format)")

out_path = os.path.join(os.path.dirname(fw_path), 'ble_CC-RT-BLE_raw.bin')
with open(out_path, 'wb') as f:
    f.write(fw)
print(f"Wrote {len(fw)} bytes to {out_path}")

print(f"""
=== Ghidra Import Instructions ===

1. File → Import File → select: {out_path}
2. Language: ARM:LE:32:Cortex
3. Options → Base Address: 0x00200000

After import:
4. Go to 0x00200000, press 'D' to disassemble
5. Window → Memory Map:
   - Add external block "ROM" at 0x00000000, size 0x60000
6. Analysis → Auto Analyze (accept defaults)
7. Search → For Strings (min length 8)

Key addresses (base 0x00200000):
  Strings start:  ~0x00203C62
  GATT DB:        ~0x00203880
  String table:   ~0x00203C62-0x00204AB8

String cross-references will reveal all functions.
""")

# Also extract all strings with addresses for Ghidra label import
strings_path = os.path.join(os.path.dirname(fw_path), 'ghidra_strings.txt')
with open(strings_path, 'w') as f:
    BASE = 0x00200000
    i = 0
    while i < len(fw):
        if 32 <= fw[i] < 127:
            end = i
            while end < len(fw) and 32 <= fw[end] < 127:
                end += 1
            if end - i >= 8 and any(c.isalpha() for c in fw[i:end].decode('ascii')[:5]):
                s = fw[i:end].decode('ascii')
                f.write(f"0x{BASE+i:08X} STR_{s[:30].replace(' ','_').replace('%','pct')}\n")
            i = end
        else:
            i += 1
print(f"String labels written to {strings_path}")
