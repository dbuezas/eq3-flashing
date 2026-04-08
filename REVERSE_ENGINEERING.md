# EQ3 CC-RT-BLE Reverse Engineering Notes


## Architecture
- **BLE chip**: Broadcom BCM20736 (WICED Smart, ARM Cortex-M3) — NOT Nordic nRF51 or TI CC2541
- **Main MCU**: STM8L052C6T6 (8-bit, 48-pin QFP, 32KB flash) — confirmed from PCB
- **Device names**: CC-RT-BLE and CC-RT-M-BLE (two variants, same functionality)
- BLE firmware is **unencrypted** ARM Thumb-2 (WICED SPAR patch format, CGS container)
- MCU firmware is **encrypted** (hex-encoded, likely AES-128 — STM8L has hardware AES accelerator, but key size unconfirmed)
- **STM8 has ROP (Read-Out Protection) enabled** — can't read flash or extract key. Decryption likely happens on MCU (no crypto strings in BLE firmware, BLE chip is a transparent relay), but not confirmed.
- BLE firmware is built on Broadcom's **Health Thermometer ROM profile** (`blether_*`)
- Most BLE protocol logic is in the BCM20736 ROM (~320KB), not the firmware patch
- **SPAR patch appears to be a thin config layer** — only ~1KB of executable Thumb-2 code found (callback registration/init). The rest is GATT DB + debug strings + config tables. UART handling, GATT write processing, connection management, and "Transmission of Internals" handling appear to be in ROM. However, the CGS container format is not fully understood — there may be additional code sections that could not be located without a SRAM dump of the running firmware.
- Full decompilation of the SPAR patch was attempted (capstone + Ghidra headless) but limited by the CGS container format. A SRAM dump after normal boot (via PUART minidriver) would provide the loaded image at actual addresses.

## Hardware (PCB)
- **IC1** (front): STM8L052C6T6 — main MCU
- **BTM1** (back): Cypress/Broadcom BCM20736 — BLE SoC, QFN with PCB antenna
- **PRG1**: 4-pin SWIM header for STM8 — pin1=SWIM, pin2=VCC, pin3=unknown, pin4=GND
- **PRG2**: 5-pin PUART header — pin1=3.3V, pin2=GND, **pin3=PUART RX**, **pin4=PUART TX (115200 baud)**, pin5=VCC. Used for debug trace output and ROM download mode (EEPROM read/write via minidriver). **Note:** PUART is initialized by the SPAR app, not the ROM. If the firmware is corrupted and the SPAR app fails to load, PUART becomes non-functional.
- **Inter-chip UART**: STM8 PA2 (pin 3, TX) ↔ BCM20736 pin 12 (RXD), STM8 PA3 (pin 4, RX) ↔ BCM20736 pin 13 (TXD). USART1 remapped to Port A. Application protocol at 9600 baud, ROM download mode at 115200 baud. **Recovery via inter-chip UART was attempted but unsuccessful** — holding STM8 NRST (pin 2) to GND and sending HCI Reset at 115200 did not elicit ROM response. The ROM's download mode interface on these pins remains unconfirmed.
- **HCI UART**: pins 12 (RXD) and 13 (TXD) on the QFN — same pins as inter-chip application UART (9600 baud). HCI protocol in programming mode, application protocol in normal mode
- **NTC thermistor**: 10kΩ SMD, connected to STM8 ADC

## BLE Protocol

### Service and Characteristics
- Service UUID: `3e135142-654f-9090-134a-a6ff5bb77046`
- Write char (0x0411): `3fa4585a-ce4a-3bad-db4b-b8df8179ea09`
- Notify char (0x0421): `d0e8434d-cd29-0996-af41-6c90f4e0eb2a`
- OTA Service: `9e5d1e47-5c13-43a0-8635-82ad38a1386f` (handles 0xFF00-0xFF07)

### Commands
| Opcode | Command | Notes |
|--------|---------|-------|
| 0x00 | Request device info | Returns serial number, MCU version |
| 0x03 | Sync time / read status | With time args: set time. Without: read status |
| 0x10 | Set weekly program for day | |
| 0x11 | Set comfort/eco temperatures | |
| 0x12 | Set window-open mode config | |
| 0x13 | Set temperature offset | |
| 0x14 | Set window config | |
| 0x20 | Read weekly program for day | |
| 0x40 | Set operation mode | auto/manual/vacation |
| 0x41 | Set target temperature | Value / 2.0 = °C |
| 0x43 | Switch to comfort temp | |
| 0x44 | Switch to eco temp | |
| 0x45 | Toggle boost mode | |
| 0x80 | Lock/unlock | |
| 0xA0/0xA1 | MCU firmware update | |
| 0xF0 | Factory reset | Undocumented, resets device + triggers AdA |

### Status Response Format (notification on 0x0421)
```
Byte 0:   0x02 (always)
Byte 1:   0x01 (always)
Byte 2:   Mode flags
            0x01=manual, 0x02=vacation, 0x04=boost, 0x08=DST,
            0x10=window-open, 0x20=locked, 0x80=low-battery
Byte 3:   Valve position (0-100%)
Byte 4:   0x04 (always)
Byte 5:   Target temperature (value / 2.0 = °C)
--- Below only on MCU >= 1.10 (always present, not just in vacation mode) ---
Bytes 6-9:  Vacation data (day, year, time, month)
--- Below only on MCU >= 1.20 ---
Byte 10:  Comfort temp (value / 2.0 = °C)
Byte 11:  Eco temp (value / 2.0 = °C)
Byte 12:  Window-open temp (value / 2.0 = °C)
Byte 13:  Window-open time (value * 5 = minutes)
Byte 14:  Temperature offset ((value - 7) / 2.0 = °C)
```

### Protocol Compatibility
- BLE protocol commands are identical across all firmware versions
- Status response length grew: 6 bytes (v1.05), 10 bytes (v1.10+), 15 bytes (v1.20+)
- MCU and BLE firmware versions should match — mismatched versions may cause UART protocol errors

## Temperature Sensor
- Device has internal NTC thermistor (proven by temp offset command and window-open detection)
- **Measured temperature is NEVER sent over BLE**
- ROM has a UART message type "Transmission of Internals" (debug string in firmware)
- "Transmission of Internals" — handler string exists in BLE firmware but was **NOT observed** during any PUART capture (idle ADV for ~20 min, BLE connected sessions, button presses, pairing, all 256 BLE commands tested). May be dead code, extremely rare (e.g. daily timer), or require specific MCU state not encountered during testing.
- Status response has no temperature field — only valve position and target temp
- **Temperature is definitively NOT accessible via BLE** — no command triggers it, no hidden opcodes exist (all 256 tested), no hidden GATT handles (all tested)
- To get temperature: custom MCU firmware (e.g., UltraFX alt-fw) adding a read command, or logic analyzer on inter-chip UART (9600 baud, QFN pins 12/13)
- PUART debug trace (PRG2 pin 4) provides full visibility into all UART frames via shift_reg CRC values — every byte of MCU responses can be decoded using CRC-16 reversal

## UART Protocol (BLE ↔ MCU)
- Frame: `[0xFD] [MsgID:1] [Data...] [CRC16_hi] [CRC16_lo]`
- Start byte: `0xFD`, escape byte: `0xFC` (confirmed for CRC bytes; payload byte stuffing unconfirmed — `0xFD` in payload may cause false frame restart on MCU)
- **CRC-16: polynomial 0x8005, init 0xFFFF, no bit reflection, no XOR out** (confirmed via PUART shift_reg analysis)
- BLE chip relays phone commands transparently: write to handle 0x0411 → wraps in UART frame → sends to MCU
- MCU responses are CRC-verified by BLE chip, then forwarded as BLE notifications on 0x0421
- Handle 0x0421 also accepts writes ("Notification Handler started" in PUART) but does NOT relay to MCU and has no observable effect (tested 0x00, 0x03, 0xFE, 0xFF, 0xFF01)
- All other GATT handles reject writes:

### GATT Handle Write Map (confirmed via probing)
| Handle | Result | Notes |
|--------|--------|-------|
| 0x0100 | WRITE_NOT_PERMITTED | GAP service |
| 0x0300 | WRITE_NOT_PERMITTED | Device Info service |
| 0x0410 | WRITE_NOT_PERMITTED | Char declaration |
| **0x0411** | **OK → MCU relay** | Thermostat write characteristic |
| 0x0412 | INVALID_HANDLE | |
| 0x0420 | WRITE_NOT_PERMITTED | Char declaration |
| **0x0421** | **OK → "Notification Handler"** | Notify char — no MCU relay |
| 0x0422+ | INVALID_HANDLE | |
| 0x0430 | OK | CCCD (indications) |

### UART Response Message IDs (MCU → BLE)
| MsgID | Type | Data |
|-------|------|------|
| 0x01 | Device info response | serial number, MCU version (14 bytes) |
| 0x02 | Status / NACK | 14 bytes (status) or 1 byte (0x80 = unknown command) |
| 0x21 | Week program response | day + 7 temp/time pairs (15 bytes) |
| 0xBB | Pairing command (MCU→BLE) | 0x01=activate, 0x00=deactivate (3 bytes) |

### UART Message Types (MCU → BLE, not triggered via BLE client)
- "Transmission of Internals" — handler string exists but **never observed**. See Temperature Sensor section.
- "Transmission of PAIRING" — MCU button press triggers pairing mode (0xBB 0x01) / deactivates on release (0xBB 0x00). Confirmed via PUART.
- "Statusinfo N/ACK with Party detected" — alternate response handler in BLE firmware. Never observed during testing. "PartyFlag" may refer to vacation mode or a special MCU state — `0x40 0x02` (vacation mode via BLE) did NOT trigger it (tested, no PartyFlag in response). Trigger condition unknown.
- Time info request — MCU asks BLE chip for time
- `0xFD+0xCC` — MCU triggers BLE scan/advertising restart
- `0xFD+0xFF` — BLE chip activates test mode and sends 0xFF to MCU (based on debug string order: "Activate Testmode" → "Sent 0xFD+0xFF" → "Pairing active set to one in Testrunnermode!"). Not triggerable via BLE writes (tested 0xFF to both 0x0411 and 0x0421), not via button press (long/short), not via PUART at runtime. Trigger mechanism unknown — possibly factory test jig.
- `0xFD+0xFE` — BLE chip sends after `"Test successful, Addresses in ADV and saved are equal!"`. Trigger unknown.
- Firmware update responses (0xA0+0x11 ACK, 0xA1+0x33 NACK, 0xA1+0x44 BL-Finished)

### Complete MCU Command Table
All 256 single-byte opcodes tested via BLE→UART relay. Only these produce non-NACK responses:

| Opcode | Command | Payload | Response |
|--------|---------|---------|----------|
| 0x00 | Device info | (none) | MsgID 0x01: serial, MCU version |
| 0x03 | Status / time sync | year,month,day,hour,min,sec | MsgID 0x02: mode,valve%,target,vacation,comfort,eco,window,offset |
| 0x10 | Set week program | day + schedule | MsgID 0x02: status ACK |
| 0x11 | Set comfort/eco temps | comfort,eco (×2=°C) | MsgID 0x02: status ACK |
| 0x12 | Set window-open config | temp,time | MsgID 0x02: status ACK |
| 0x13 | Set temperature offset | offset | MsgID 0x02: status ACK |
| 0x14 | Set window params | params | MsgID 0x02: status ACK |
| 0x20 | Read week program | day (0-6) | MsgID 0x21: day + 7 temp/time pairs |
| 0x40 | Set operation mode | mode | MsgID 0x02: status ACK |
| 0x41 | Set target temperature | temp (×2=°C) | MsgID 0x02: status ACK |
| 0x43 | Switch to comfort temp | (none) | MsgID 0x02: status ACK |
| 0x44 | Switch to eco temp | (none) | MsgID 0x02: status ACK |
| 0x45 | Toggle boost | 0=off, 1=on | MsgID 0x02: status ACK |
| 0x80 | Lock/unlock | 0=unlock, 1=lock | MsgID 0x02: status ACK |
| 0xA0 | MCU FW update start | firmware data | ACK/NACK |
| 0xA1 | MCU FW update data | firmware data | ACK/NACK/BL-Finished |
| 0xF0 | Factory reset | (none) | Untested — triggers AdA calibration |

All other opcodes → NACK `[0x02][0x80]`. **No hidden commands exist.**

## PIN/Pairing

### History
- **v1.05-v1.10**: No real security. App had a 4-digit PIN derived from serial number, but only checked client-side. The thermostat accepted commands from any BLE client.
- **v1.20**: `pairing_active` flag added to BLE firmware. App started showing pairing UI.
- **v1.44** (intermediate, not in our collection): First attempt at real BLE pairing. Buggy — bricked devices by showing "000-" and "-255" if app closed during pairing activation.
- **v1.46**: Fixed v1.44 bugs. 6-digit passkey displayed on LCD, static per device (changes on factory reset). Retrievable by holding the main button.
- **v1.48**: "Security flaw fix" — passkey required for all connections.

### Legacy 4-digit PIN Formula (pre-v1.44, app-only)
Derived from serial number (e.g. `REQ0123456`):
```
digit1 = serial[3] XOR serial[7] mod 10
digit2 = serial[4] XOR serial[8] mod 10
digit3 = serial[5] XOR serial[9] mod 10
digit4 = (serial[0] - 'A') XOR (serial[6] - '0') mod 10
```

### Technical Details
- The device never truly enforces pairing at the BLE level (Bumble bypasses it completely)
- `pairing_active` flag is set by MCU via UART at runtime, stored in NVRAM
- v1.46 and v1.48 BLE firmware are functionally identical — PIN behavior comes from MCU

### Why Pairing Happens (Even Without PIN)
All firmware versions trigger pairing due to GATT CCCD AUTH permissions:

1. **CCCD AUTH_WRITABLE (all versions)**: Handles 0x0220 and 0x0430 have `LEGATTDB_PERM_AUTH_WRITABLE` (bit 6). When bluez writes these CCCDs to subscribe to notifications, it gets `INSUFFICIENT_AUTHENTICATION` and auto-initiates pairing.

2. **encr_required / Security Request (v1.46+ only)**: `BLE_PROFILE_CFG.encr_required = 0x03` (`SECURITY_ENABLED | SECURITY_REQUEST`), making the BLE chip send an SMP Security Request after connection.

### WICED LEGATTDB Permission Bits (from SDK legattdb.h)
```
bit 0: VARIABLE_LENGTH   ← STRUCTURAL: affects entry parsing, DO NOT CHANGE
bit 1: READABLE
bit 2: WRITE_CMD
bit 3: WRITE_REQ
bit 4: AUTH_READABLE
bit 5: RELIABLE_WRITE
bit 6: AUTH_WRITABLE      ← safe to change
bit 7: SERVICE_UUID_128   ← STRUCTURAL: affects entry parsing, DO NOT CHANGE
```

GATT DB entry headers (packed structs):
- `LEGATTDB_ENTRY_HDR`: `[handle:2LE][perm:1][len:1]` (4 bytes)
- `LEGATTDB_WRITABLE_ENTRY_HDR`: `[handle:2LE][perm:1][len:1][maxLen:1]` (5 bytes)
- Writable = `perm & (WRITE_CMD | WRITE_REQ | AUTH_WRITABLE)` → uses 5-byte header

**WARNING**: Changing bits 0 or 7 corrupts the GATT DB parser, making subsequent entries (including the OTA service) invisible. This bricks the device for BLE OTA recovery.

**WARNING**: Writing to EEPROM via PUART is risky. If the write corrupts the DS1 firmware header and the SPAR app fails to load, the ROM falls back to its default HCI interface (QFN pins 12/13, NOT PUART). The device becomes **unrecoverable via the PRG2 header**. Single-byte patches (proven safe) are much less risky than bulk firmware writes (experimental, caused a brick).

### noauth Patch
To remove pairing completely from all firmware versions:
- Patch CCCD permission `0x6E` → `0x2E` on handles 0x0220 and 0x0430 (clears AUTH_WRITABLE bit 6 only)
- For v1.46+, also patch `encr_required` from `0x03` to `0x00` in `BLE_PROFILE_CFG`
- Patched firmware in `firmware/<version>/noauth/`
- Use `--noauth` flag with flash_ble_firmware.py or unbrick_flash.py

## Firmware Versions
| Firmware | App     | CC-RT-BLE | CC-RT-M-BLE | MCU size | BLE ver | PIN     | Changes |
|----------|---------|-----------|-------------|----------|---------|---------|---------|
| 1.05     | v1.0.3  | 17118     | -           | 33712    | 1.2     | None    | Initial release (2015) |
| 1.06     | v1.1.6  | 17118     | -           | 33236    | 1.2     | None    | Connection fixes |
| 1.10     | v1.1.7  | 18270     | 18274       | 33088    | 2.0     | None    | Week program, extended status (2016) |
| 1.20     | v1.2.1+ | 18490     | 18512       | 33088    | 3.2     | None    | Presets in status (comfort/eco/offset) (2018) |
| 1.46     | v1.3.6+ | 19120     | 19124       | 34024    | 4.4     | 6-digit | Real BLE pairing, passkey on LCD (2020) |
| 1.48     | v1.5.2+ | 19128     | 19132       | 34024    | 4.6     | 6-digit | Security fix, mandatory passkey (2024) |

File naming: `ble_CC-RT-BLE.bin`, `ble_CC-RT-M-BLE.bin`, `mcu_CC-RT-BLE.enc`, `mcu_CC-RT-M-BLE.enc`.
Note: v1.48 APK had the BLE variants swapped (bleupdate.bin was CC-RT-M-BLE).

## BLE Firmware Variant Differences
The two variants (CC-RT-BLE vs CC-RT-M-BLE) are the **same code** with only two differences:
1. **Device name string** in the GATT database
2. **OTA Application ID**: `0x1000` (CC-RT-BLE) vs `0x1001` (CC-RT-M-BLE)

```c
typedef struct {
    UINT16 ID;             // 0x1000 or 0x1001
    UINT8  Version_Major;  // e.g. 4
    UINT8  Version_Minor;  // e.g. 4
} WS_UPGRADE_APP_INFO;    // exposed at GATT handle 0xFF07
```

The Application ID is never validated — flashing either variant on either device works.
All other byte differences are ARM address relocations from the 2-char longer name.

## BLE Firmware Flashing
- OTA flash via WICED Smart protocol (ws_upgrade)
- CRC32: Broadcom variant (poly 0x04C11DB7, bit-reversed I/O, inverted)
- Variant auto-detected from BLE device name
- Flash order: MCU first (0xA0/0xA1), then BLE (OTA service). Reconnect required between steps.
- MCU bootloader does NOT block downgrades
- MCU and BLE versions should match for stability

### Bumble Bypass (no PIN needed)
- `unbrick_flash.py` uses Google's Bumble library to bypass Linux kernel SMP
- Bumble talks directly to HCI adapter, ignores SMP Security Requests
- Key details: `OwnAddressType.PUBLIC`, `with_response=True` on OTA control writes
- Requires root, temporarily takes exclusive HCI adapter control

## Tools
- `flash_ble_firmware.py` — flash MCU and/or BLE firmware via bleak (requires pairing or --noauth)
- `unbrick_flash.py` — flash BLE firmware via Bumble, bypasses SMP (no PIN needed, requires root)
- `uart_eeprom.py` — BCM20736 EEPROM dump/flash/patch via PUART (PRG2 header, no BLE needed)
- `firmware/` — all firmware versions from Calor BT APKs, with noauth variants
- `firmware/minidriver/` — BCM20736 UART minidrivers for EEPROM access
- See [FLASHING.md](FLASHING.md) for full documentation of all flash methods

## BLE Chip Boot Sequence (observed via PUART)
```
create()                              ← WICED app entry point
puart_initialization()                ← debug UART at 115200
PassKey read from NVRAM: %x, %x, %x  ← reads stored passkey
First run read from NVRAM: %x rb: %x ← first-run flag
Generated Random Number: %x           ← (first run only) random seed
Generated Passkey: %x %x %x           ← (first run only) derive passkey
Generated Pin: %u                      ← (first run only) 6-digit PIN for LCD
PK transmission!                       ← send passkey to MCU via UART
ws_upgrade_init: DS:%04x SS:%04x      ← OTA init (active DS and SS addresses)
Pack ADV Field perform                 ← begin advertising (1/sec)
```

### BLE Connection Flow (observed via PUART)
```
trv_ble_connection_up: %08x%04x %d    ← connection established
NVRAM write:0030                       ← save connection state
encryption CHANGED handler started!    ← link encrypted
handle:220 val:0002                    ← client enables notifications (CCCD)
handle:430 val:0001                    ← client enables indications (CCCD)
Transmitted Payload [bytes]            ← BLE→MCU command relay
CRC-Register %x                        ← CRC of sent frame
GPIO: TRUE                             ← MCU UART activity (GPIO interrupt)
[message type] detected                ← MCU response parsed
shift_reg = %x (×16)                   ← running CRC-16 of response bytes
CRC-Check successful                   ← response verified
Notification sent to smartphone        ← forwarded to BLE client
```

### 163 Debug Strings
The BLE firmware contains 163 debug strings output via PUART `ble_trace()`. Key categories:
- GATT handlers: `bad length`, `write len`, `don't notify`, `indicate len`
- UART protocol: `ble_control[0-18]`, `CRC-Check`, `shift_reg`, `Data Read Flag`
- Message types: `Statusinfo N/ACK`, `Week program response`, `Transmission of Internals/PAIRING`, `TimeInfoRequest`
- Pairing: `PassKey read from NVRAM`, `Generated Passkey`, `smp_bond_result`, `pairing_active`
- OTA: `ws_verify`, `send_status`, `Command/State`, `Active DS`
- Connection: `trv_ble_connection_up/down`, `encryption changed`, `ADV start/stop`
- Test/debug: `Activate Testmode`, `GPIO: TRUE/FALSE`, `Dummy Notification`

## References
- [Heckie75 eQ-3 radiator thermostat API](https://github.com/Heckie75/eQ-3-radiator-thermostat/blob/master/eq-3-radiator-thermostat-api.md)
- [Recovering eQ-3 CC-RT-BLE 1.44 Update](https://narfation.org/2020/12/15/recovering-eq-3-cc-rt-ble-1-44-update)
- [python-eq3bt](https://github.com/rytilahti/python-eq3bt)
- [WICED Smart SDK](https://github.com/j123m456/WICED-Smart-SDK)
- [UltraFX alternative STM8 firmware](https://github.com/UltraFX/eq3-thermostat-alt-fw)
