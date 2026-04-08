# BLE Firmware Analysis (v1.46 bleupdate.bin)

## Tools Used
- Capstone (Python ARM Thumb-2 disassembler) — string extraction, function scanning
- Ghidra 11.3.2 headless — partial decompilation (limited by multi-segment binary format)

## Binary Format
The firmware is a **WICED Smart SPAR patch** — NOT a flat binary. It consists of multiple
memory patch records loaded to different SRAM addresses by the BCM20736 ROM bootloader.
This means a single base address doesn't work for the entire file.

- File offset 0-3: `0x00000118` prefix (minidriver indicator, 280 bytes)
- File offset 4+: DS (Dynamic Section) blob containing code, data, GATT DB, config, strings
- Best-fit base for code region: **0x002007F0**
- 25 string pointer references verified at this base
- SRAM pointer range: 0x00200146 - 0x00205558

## Identified Strings (135 total)
Full list in `bleupdate_strings.txt`. Key categories:

### UART Protocol (BLE ↔ STM8 MCU at 9600 baud)
- Frame format: `[0xFD] [MsgID] [Data...] [CRC16_hi] [CRC16_lo]`
- 0xFC/0xFD byte stuffing (debug warns when checksum bytes contain these)
- `ble_control[]` is a 19-byte buffer relayed to MCU

### UART Message Types FROM MCU
1. **Status ACK/NACK** — with/without status info, with/without "party flag"
2. **Week program response**
3. **"Transmission of Internals"** — MCU internal data (UNKNOWN CONTENT)
4. **"Transmission of PAIRING"** — pairing info
5. **Time info request** — MCU asks BLE chip for time
6. **`0xFD+0xCC`** — scan/advertising trigger
7. **Firmware update responses** (0xA0+0x11 ACK, 0xA1+0x33 NACK, 0xA1+0x44 BL-Finished)

### UART Commands TO MCU
- `0xFD+0xFF` — activate test mode
- `0xFD+0xFE` — unknown test command
- Serial number write
- `ble_control[]` relay (all phone commands)

### Command Byte Format
`((attrPtr[1] & 0xC0) >> 6)` extracts a 2-bit type field from the upper bits.

## Ghidra Decompilation (47 functions)
Output in `bleupdate_ghidra_decompiled.c`. Quality is limited because:
- Multi-segment format means many "bad instruction data" warnings
- Data regions are misinterpreted as code
- String references not resolved (different SRAM segment)

### Function Map
- `FUN_002018a0` — **app_create()**: main entry point, calls all setup functions
- `FUN_00201c58` — **GATT handler setup**: registers 27 characteristic handlers
- `FUN_002019b8`-`FUN_00201b10` — individual GATT characteristic write handlers
- `FUN_00201b20` — initialization helper
- `FUN_00201b46` — returns a configuration value
- `FUN_002024a6`-`FUN_002039bc` — larger functions (UART message dispatch, etc.)
  - These are in a different code segment and decompiled poorly

## Critical Finding: UART Protocol Logic is in ROM

The UART message dispatch (including "Transmission of Internals" handler) is **entirely in the
BCM20736 ROM**, not in the firmware patch. Evidence:

1. **No ble_trace calls from firmware** — The debug strings are in the firmware data section
   but are referenced by ROM code, not firmware code
2. **bleprofile_handleUARTCb = 0x0000C808** — The UART callback points to a ROM address,
   meaning the firmware uses the ROM's default UART handler
3. **ROM symbols available** — 4963 symbols from `patch.symdefs`, including handler addresses
4. **The firmware patch only contains**: config data, GATT database, init code, callback
   registrations, and debug strings

### Firmware Architecture
- ROM (0x00000000-0x0004FFFF): ALL protocol logic, UART dispatch, ble_trace, profiles
- Firmware patch (SRAM ~0x002007F0+): Config, GATT DB, init functions, debug strings
- The firmware CONFIGURES the ROM via data pointers and callback registrations
- The ROM REFERENCES firmware strings for debug tracing

### Key ROM Addresses (from patch.symdefs)
- `0x0000C808` — UART message handler (bleprofile_handleUARTCb default)
- `0x0001643D` — bleprofile_regHandleUARTCb (callback registration)
- `0x0000E91B` — ble_trace0 (debug trace, 0 args)
- `0x0000E92F` — ble_trace1 (debug trace, 1 arg)
- `0x0000E941` — ble_trace2 (debug trace, 2 args)
- `0x00202BB0` — virtualFunctions (ROM callback dispatch table)

## Temperature: Confirmed NOT Exposed via BLE

The EQ3 firmware is built on Broadcom's **BLE Health Thermometer ROM profile** (`blether_*`).
The ROM code flow is:

1. MCU sends "Transmission of Internals" via UART (0xFD-framed, CRC-16)
2. ROM calls `bleprofile_handleUARTCb` (EQ3 callback at ROM 0x0000C808)
3. Callback parses UART data, fills `BLETHER_THER_DATA` struct:
   ```c
   typedef struct {
       UINT8    flag;          // Celsius/Fahrenheit
       FLOAT32  tempmeasure;   // THE TEMPERATURE
       TIMESTAMP timestamp;    // 7 bytes
       UINT8    temptype;      // body location
   } BLETHER_THER_DATA;
   ```
4. ROM tries to send temperature via Health Thermometer Service (UUID 0x1809) indication
5. **BUT**: EQ3's GATT database does NOT include the Health Thermometer Service
6. So `blether_ther_hdl = 0` and the indication is never sent

**The temperature is received and processed by the BLE chip but has nowhere to go.**
The MCU measures it, sends it over UART, and the BLE chip discards it.

### Confirmed by live testing
- Status response (0x03) contains: mode, valve%, target_temp — NO measured temp
- No unsolicited notifications with temperature data observed
- All unknown commands (0x01-0x0C, 0x30-0x3F, etc.) return error (0x02 0x80)
- 0xF0 = factory reset (confirmed working, resets device + AdA)

### To get temperature, you would need:
1. **Logic analyzer** on UART traces — capture "Transmission of Internals" raw data
2. **Custom BLE firmware** — add Health Thermometer Service to GATT DB so ROM sends indications
3. **Custom MCU firmware** — not feasible (STM8 ROP blocks flash readback)

## Tools Installed
- **Ghidra 11.3.2** at `/tmp/ghidra_11.3.2_PUBLIC/` (Java 21 at `/usr/local/Cellar/openjdk@21/`)
- **radare2 6.1.2** (`r2` command available)
- Ghidra project saved at `/tmp/ghidra_project/eq3_ble`

To open Ghidra GUI:
```bash
export JAVA_HOME=/usr/local/Cellar/openjdk@21/21.0.9/libexec/openjdk.jdk/Contents/Home
/tmp/ghidra_11.3.2_PUBLIC/ghidraRun
```
Then open project `/tmp/ghidra_project/eq3_ble`.

## Recommendations for Further Analysis
1. **Logic analyzer capture** — Fastest path to understanding "Transmission of Internals".
   Sniff UART during normal operation and decode the 0xFD-framed messages.
2. **Ghidra GUI** — Interactive analysis needed to properly handle the multi-segment
   binary. Manually define memory regions, mark code vs data, then decompile.
   The SPAR patch format loads different chunks to different SRAM addresses.
3. **Compare firmware versions** — Diff v1.10 and v1.46 decompiled output to find
   what changed (pairing enforcement code)
