[!["Buy Me A Coffee"](https://www.buymeacoffee.com/assets/img/custom_images/orange_img.png)](https://www.buymeacoffee.com/dbuezas)

# EQ3 CC-RT-BLE Firmware Flashing Guide

<img width="200" height="200" alt="image" src="https://github.com/user-attachments/assets/7102716a-915f-47e8-9497-de93796c0927" />

## Quick Start

**Recommended:** Flash v1.48 with `--noauth` to remove all pairing requirements. This not only eliminates the PIN prompt that causes connection issues with Home Assistant, but also any pairing requiremts whatsoever.

If you use it from home assistant, ssh into it and do everything from there

### Before flashing:

1. Disable the device in Home Assistant to avoid interference
2. Make sure nothing is connected to the device (bluetoothctl, HA, phone)
3. If the device shows "Ins", press the dial and wait for "AdA" to finish
4. Pair if needed:

```sh
     $ bluetoothctl
     > scan on
     > pair <addr>  #        (accept prompt or enter 6-digit PIN from display, if you can't pair, see unbrick_flash.py below)
     > disconnect <addr>
     > quit
```

```bash
# Clone this repo
git clone https://github.com/dbuezas/eq3-flashing.git /tmp/eq3-flashing
cd /tmp/eq3-flashing

# Create a venv and install dependencies
python3 -m venv /tmp/eq3-venv
/tmp/eq3-venv/bin/pip install bleak

# Flash MCU + BLE with noauth (auto-detects variant)
# Replace <address> with your device's MAC (e.g. 00:1A:22:12:B6:05)
/tmp/eq3-venv/bin/python3 flash_ble_firmware.py <address> 1.48 --noauth
```

If pairing fails or you don't know the PIN, use the Bumble method instead (see Method 2).

After flashing, power cycle the thermostat (remove/reinsert batteries) and restart your HA Bluetooth integration.

## Overview

Three methods to flash firmware:

| Method               | Script                  | Requires                          | Use case                                   |
| -------------------- | ----------------------- | --------------------------------- | ------------------------------------------ |
| **BLE OTA**          | `flash_ble_firmware.py` | bleak, paired or noauth FW        | **Recommended** — normal flash (MCU + BLE) |
| **BLE OTA (Bumble)** | `unbrick_flash.py`      | bumble, root, Linux               | Can't pair / don't know PIN                |
| **UART (PUART)**     | `uart_eeprom.py`        | USB-UART adapter, physical access | Bricked device recovery, EEPROM dump       |

## Device Variants

Two hardware variants exist. They are functionally identical — only the BLE device name and OTA App ID differ:

| Variant     | Device name   | OTA App ID |
| ----------- | ------------- | ---------- |
| CC-RT-BLE   | `CC-RT-BLE`   | `0x1000`   |
| CC-RT-M-BLE | `CC-RT-M-BLE` | `0x1001`   |

The App ID is never validated — either firmware variant works on either hardware. The correct variant is auto-detected from the device name, or can be forced with `--variant`.

## Firmware Versions

| Version | BLE size (BLE/M) | MCU size | PIN     | Notes                                        |
| ------- | ---------------- | -------- | ------- | -------------------------------------------- |
| 1.05    | 17118 / —        | 33712    | None    | Initial release (2015), CC-RT-BLE only       |
| 1.06    | 17118 / —        | 33236    | None    | Connection fixes, CC-RT-BLE only             |
| 1.10    | 18270 / 18274    | 33088    | None    | Week program, extended status (2016)         |
| 1.20    | 18490 / 18512    | 33088    | None    | Presets in status response (2018)            |
| 1.46    | 19120 / 19124    | 34024    | 6-digit | Real BLE pairing, passkey on LCD (2020)      |
| 1.48    | 19128 / 19132    | 34024    | 6-digit | Mandatory passkey for all connections (2024) |

### File naming

```
firmware/<version>/ble_CC-RT-BLE.bin        # BLE firmware (original)
firmware/<version>/ble_CC-RT-M-BLE.bin      # BLE firmware M variant (original)
firmware/<version>/noauth/ble_CC-RT-BLE.bin # BLE firmware (no-pairing patch)
firmware/<version>/noauth/ble_CC-RT-M-BLE.bin
firmware/<version>/mcu_CC-RT-BLE.enc        # MCU firmware (AES encrypted)
firmware/<version>/mcu_CC-RT-M-BLE.enc
```

### noauth firmware

Patched BLE firmware that removes all pairing requirements. Works on all firmware versions.

Changes:

- CCCD permission `0x6E` → `0x2E` (clears `AUTH_WRITABLE` bit, keeps all others intact)
- v1.46+: `encr_required` `0x03` → `0x00` (disables SMP Security Request)

Use `--noauth` flag with any flash script.

## Method 1: BLE OTA (`flash_ble_firmware.py`)

Standard flash via Bluetooth. Requires the device to be paired (or already running noauth firmware).

```bash
pip install bleak

# Show available firmware versions
python3 flash_ble_firmware.py

# Scan for devices
python3 flash_ble_firmware.py scan

# Flash both MCU and BLE (auto-detects variant)
python3 flash_ble_firmware.py <address> <version>

# Flash with noauth BLE firmware
python3 flash_ble_firmware.py <address> <version> --noauth

# Flash BLE only (skip MCU)
python3 flash_ble_firmware.py <address> <version> --ble-only --noauth

# Force variant
python3 flash_ble_firmware.py <address> <version> --variant CC-RT-M-BLE

# Specify adapter (Linux)
python3 flash_ble_firmware.py <address> <version> --adapter hci0
```

Flash order: MCU first, then BLE. The script automatically reconnects between steps.

## Method 2: BLE OTA via Bumble (`unbrick_flash.py`)

Uses Google's Bumble library to bypass Linux kernel SMP enforcement. **No PIN or pairing required.** Use this when you can't pair the device (unknown PIN, locked out, mismatched firmware).

```bash
pip install bumble

# Flash BLE firmware (bypasses PIN)
sudo python3 unbrick_flash.py <address> 1.48 --noauth

# With variant and adapter
sudo python3 unbrick_flash.py <address> 1.48 --noauth --variant CC-RT-BLE --adapter hci0
```

**Requirements:**

- Linux only (raw HCI socket)
- Root access (or `CAP_NET_RAW`)
- Temporarily takes exclusive control of the BLE adapter

**How it works:**

- Bumble talks directly to the HCI adapter, bypassing the kernel's BLE SMP stack
- The thermostat sends an SMP Security Request after connection, but Bumble ignores it
- The thermostat accepts GATT operations anyway — pairing was never truly enforced at the BLE level

**Note:** This script only flashes BLE firmware. Flash the MCU separately with `flash_ble_firmware.py --mcu-only` if needed (MCU flash doesn't require pairing).

## Method 3: UART EEPROM Access (`uart_eeprom.py`)

Direct EEPROM read/write via the PRG2 programming header on the PCB. **Does not require BLE at all.** Used for:

- Recovering GATT DB bricked devices (corrupted permissions, no OTA service visible)
- Dumping full EEPROM contents for analysis
- Patching individual bytes (tested, safe)

### Hardware Setup

**PRG2 header pinout** (5 pins, left to right when text is readable):

```
Pin 1: 3.3V
Pin 2: GND
Pin 3: PUART RX (input to BLE chip)
Pin 4: PUART TX (output from BLE chip, 115200 baud)
Pin 5: VCC
```

Connect a 3.3V USB-UART adapter:

- Adapter **TX** → PRG2 **pin 3**
- Adapter **RX** → PRG2 **pin 4**
- Adapter **GND** → PRG2 **pin 2**

### Protocol

The BCM20736 ROM has a built-in HCI download mode accessible via PUART:

1. Script continuously sends HCI Reset commands
2. **Pull the batteries** from the thermostat, wait 2 seconds
3. **Re-insert batteries** — the ROM bootloader responds before the application starts
4. Script uploads a minidriver to RAM (enables EEPROM access)
5. EEPROM can be read/written via indirect memory map

### EEPROM Layout

```
Offset  Size   Purpose
0x0000  256B   SS1 (Static Section 1 — active flag, config)
0x0100  256B   SS2 (Static Section 2 — backup)
0x0140  ~1KB   VS  (Volatile Section — NVRAM, pairing data)
0x0580  ~31KB  DS1 (Data Section 1 — active firmware image)
0x8000  ~31KB  DS2 (Data Section 2 — backup/OTA staging)
```

### Usage

```bash
pip install pyserial

# Dump full EEPROM (64KB) — pull battery, wait 2s, re-insert when prompted
python3 uart_eeprom.py dump -p /dev/ttyUSB0 -o eeprom_backup.bin

# Read a specific region
python3 uart_eeprom.py read -p /dev/ttyUSB0 --offset 0x3C00 --length 128

# Patch a single byte (e.g., fix corrupted GATT DB permission) — TESTED, SAFE
python3 uart_eeprom.py patch -p /dev/ttyUSB0 --offset 0x3C2A --value 0x8A
```

**DO NOT USE `flash-fw` or `flash` commands** — bulk EEPROM writes are untested and can corrupt the firmware header, making the device unrecoverable via PUART. Use `patch` for single-byte fixes, or flash via BLE OTA instead.

After any operation, **power cycle the device** (remove and re-insert batteries) to resume normal operation.

### Minidriver Files

The minidriver is a small program uploaded to RAM that enables EEPROM access:

```
firmware/minidriver/
  uart_20736.hex                      # Standard minidriver (RAM read/write only)
  uart_DISABLE_EEPROM_WP_PIN1.hex    # WP-disable minidriver (required for EEPROM access)
```

The WP-disable variant is required — the standard minidriver cannot access the EEPROM.

### Reference EEPROM Dumps

Known-good EEPROM dumps (64KB, noauth v1.48 firmware):

```
firmware/1.48/eeprom_CC-RT-BLE_noauth.bin
firmware/1.48/eeprom_CC-RT-M-BLE_noauth.bin
```

These are for analysis/reference. Do NOT flash one device's EEPROM dump onto a different device.

## Unbricking a Device

### Symptoms of a GATT DB brick

- Thermostat appears to work normally (display, motor, buttons)
- BLE advertising works (device is discoverable)
- BLE connection works, but only 3 GATT services visible (GAP, GATT, Device Info)
- Thermostat service and OTA service are missing
- Cannot flash via BLE OTA
- **PUART still works** (debug trace visible on PRG2 pin 4)

### Cause

Corrupted GATT DB permission bytes. If bits 0 (`VARIABLE_LENGTH`) or 7 (`SERVICE_UUID_128`) are changed, the GATT DB parser misreads entry header sizes, shifting all subsequent entries. The OTA service becomes invisible.

### Recovery

**Option A: UART EEPROM patch** (safest — single-byte writes, tested and proven)

```bash
# Connect UART adapter to PRG2 header
# Dump EEPROM for analysis
python3 uart_eeprom.py dump -p /dev/ttyUSB0 -o broken.bin

# Compare with known-good dump or the original firmware file to find corrupted bytes
# Patch the specific bytes (one at a time — safe, proven)
python3 uart_eeprom.py patch -p /dev/ttyUSB0 --offset 0x3C2A --value 0x8A
python3 uart_eeprom.py patch -p /dev/ttyUSB0 --offset 0x3C68 --value 0x8A
```

**Option B: Bumble BLE flash** (if OTA service is still visible but PIN is unknown)

```bash
sudo python3 unbrick_flash.py <address> 1.48 --noauth --variant CC-RT-BLE
```

### WARNING: DO NOT use `flash-fw` or `flash` commands

Bulk EEPROM writes via PUART are **untested and dangerous**. A partial write failure can corrupt the DS1 firmware header, causing the SPAR app to not load. Without the SPAR app, PUART is never initialized. Recovery via the inter-chip UART (STM8 PA2/PA3 = pins 3/4, holding NRST to GND) was attempted but **did not work** — the ROM did not respond to HCI Reset at 115200 on those pins. The device becomes **permanently bricked**.

The `patch` command (single-byte writes) is the only tested and safe write operation.

### Inter-chip UART pinout (for future recovery attempts)

If someone finds a way to enter ROM download mode via the inter-chip UART:

- STM8 pin 2 (NRST/PA1) → GND (hold MCU in reset)
- STM8 pin 3 (PA2) → UART adapter TX (connects to BCM20736 RXD, pin 12)
- STM8 pin 4 (PA3) → UART adapter RX (connects to BCM20736 TXD, pin 13)
- Pins 2, 3, 4 are adjacent on the top-left corner of the 48-pin QFP

### PUART Debug Trace

PRG2 pin 4 outputs debug trace at 115200 baud. Connect UART RX only to monitor:

```
Pack ADV Field perform              # Every ~1s during advertising
GPIO-Interrupt detected             # Button press
Transmission of PAIRING detected    # MCU sent pairing command
trv_ble_connection_up: <addr>       # BLE connection established
connection DOWN handler started!    # BLE disconnect
CRC-Check successful                # UART frame from MCU verified
```

Useful for diagnosing connection issues, verifying MCU↔BLE communication, and understanding device state.
