#!/usr/bin/env python3
"""
EQ3 CC-RT-BLE: Flash MCU and BLE chip firmware.

Two device variants exist: CC-RT-BLE and CC-RT-M-BLE.
The correct variant is auto-detected from the device name.

Requirements:
    pip install bleak

Usage:
    flash_firmware.py                                    Show firmware version table
    flash_firmware.py scan                               Scan for CC-RT-BLE devices
    flash_firmware.py <addr> 1.20                        Flash both MCU and BLE
    flash_firmware.py <addr> 1.20 --ble-only             Flash BLE firmware only
    flash_firmware.py <addr> 1.20 --mcu-only             Flash MCU firmware only
    flash_firmware.py <addr> 1.20 --noauth               Flash with no-pairing BLE firmware
    flash_firmware.py <addr> 1.20 --adapter hci0         Specify BT adapter (Linux)
    flash_firmware.py <addr> 1.20 --variant CC-RT-M-BLE  Force device variant
"""

import argparse
import asyncio
import binascii
import os
import struct
import sys
from pathlib import Path

from bleak import BleakClient, BleakScanner

# BLE OTA UUIDs (WICED Smart ws_upgrade)
OTA_CONTROL_POINT = "e3dd50bf-f7a7-4e99-838e-570a086c666b"
OTA_DATA = "92e86c7a-d961-4091-b74f-2409e72efe36"

# Thermostat UUIDs (MCU firmware update + device info)
PROP_WRITE_UUID = "3fa4585a-ce4a-3bad-db4b-b8df8179ea09"
PROP_NTFY_UUID = "d0e8434d-cd29-0996-af41-6c90f4e0eb2a"

FIRMWARE_DIR = os.path.join(os.path.dirname(__file__), "firmware")


# --- CRC32 for WICED Smart OTA ---


def _bitrev(value: int, width: int) -> int:
    result = 0
    for i in range(width):
        if value & (1 << i):
            result |= 1 << (width - 1 - i)
    return result


def crc32_wiced(data: bytes) -> int:
    """Broadcom WICED Smart CRC32 (poly 0x04C11DB7, bit-reversed I/O)."""
    crc = 0xFFFFFFFF
    for byte in data:
        crc ^= _bitrev(byte, 8) << 24
        for _ in range(8):
            if crc & 0x80000000:
                crc = ((crc << 1) ^ 0x04C11DB7) & 0xFFFFFFFF
            else:
                crc = (crc << 1) & 0xFFFFFFFF
    return _bitrev(crc, 32) ^ 0xFFFFFFFF


# --- Device info query ---


async def query_device_info(client: BleakClient) -> tuple[int, int, int]:
    """Query device and return (mcu_version, ble_major, ble_minor)."""
    event = asyncio.Event()
    response = [None]

    def on_notify(sender, data):
        response[0] = data
        event.set()

    await client.start_notify(PROP_NTFY_UUID, on_notify)
    await asyncio.sleep(0.5)

    event.clear()
    await client.write_gatt_char(PROP_WRITE_UUID, bytes([0x00]))
    try:
        await asyncio.wait_for(event.wait(), 5.0)
    except asyncio.TimeoutError:
        await client.stop_notify(PROP_NTFY_UUID)
        raise RuntimeError("Timeout querying device info")

    data = response[0]
    await client.stop_notify(PROP_NTFY_UUID)

    if data[0] != 0x01 or len(data) < 4:
        raise RuntimeError(f"Unexpected device info response: {data.hex()}")

    return data[1], data[2], data[3]


VALID_DEVICE_NAMES = ["CC-RT-BLE", "CC-RT-M-BLE"]


# --- MCU firmware parsing ---


def parse_mcu_chunks(data: bytes) -> list[bytes]:
    """Parse hex-encoded MCU firmware into chunks."""
    chunks = []
    i = 0
    while i < len(data):
        chunk_len = ((data[i] << 8) | data[i + 1]) + 2
        if chunk_len > len(data) - i:
            break
        chunks.append(data[i : i + chunk_len])
        i += chunk_len
    return chunks


# --- MCU firmware flash (0xA0/0xA1) ---


async def flash_mcu(client: BleakClient, fw_path: str) -> bool:
    """Flash MCU firmware via thermostat protocol."""
    raw = binascii.unhexlify(Path(fw_path).read_text().strip())
    chunks = parse_mcu_chunks(raw)
    print(f"MCU firmware: {fw_path}")
    print(f"  {len(raw)} bytes, {len(chunks)} chunks")

    event = asyncio.Event()
    response = [None]

    def on_notify(sender, data):
        response[0] = data
        event.set()

    async def wait(timeout=20.0):
        event.clear()
        response[0] = None
        try:
            await asyncio.wait_for(event.wait(), timeout)
        except asyncio.TimeoutError:
            return None
        return response[0]

    await client.start_notify(PROP_NTFY_UUID, on_notify)
    await asyncio.sleep(1.0)

    print("  Sending start command (0xA0)...")
    await client.write_gatt_char(PROP_WRITE_UUID, bytes([0xA0]))
    resp = await wait(timeout=20.0)
    if resp is None or len(resp) < 2 or resp[0] != 0xA0:
        print(f"  FAILED: unexpected response {resp.hex() if resp else 'timeout'}")
        return False
    print("  Device ready for MCU firmware.")

    for chunk_idx, chunk in enumerate(chunks):
        seq = 0
        offset = 0
        while offset < len(chunk):
            end = min(offset + 14, len(chunk))
            pkt_data = chunk[offset:end]
            pkt_data = pkt_data + bytes(14 - len(pkt_data))
            cmd = bytes([0xA1, seq]) + pkt_data
            await client.write_gatt_char(PROP_WRITE_UUID, cmd)
            offset = end
            seq += 1

        resp = await wait(timeout=20.0)
        if resp is None:
            print(f"  FAILED: timeout at chunk {chunk_idx}")
            return False

        if chunk_idx % 20 == 0 or chunk_idx == len(chunks) - 1:
            pct = ((chunk_idx + 1) * 100) // len(chunks)
            print(f"  {pct}%")

        if len(resp) >= 2 and resp[0] == 0xA1:
            if resp[1] == 0x44:
                print("  MCU reports update finished.")
                return True
            if resp[1] == 0x33:
                print(f"  FAILED: NACK at chunk {chunk_idx}")
                return False

    await client.stop_notify(PROP_NTFY_UUID)
    print("  MCU firmware sent.")
    return True


# --- BLE firmware flash (WICED OTA) ---


async def flash_ble(client: BleakClient, fw_path: str) -> bool:
    """Flash BLE chip firmware via WICED Smart OTA (single attempt)."""
    fw_data = Path(fw_path).read_bytes()
    crc = crc32_wiced(fw_data)
    print(f"BLE firmware: {fw_path}")
    print(f"  {len(fw_data)} bytes, CRC32: 0x{crc:08X}")

    event = asyncio.Event()
    status = [None]

    def on_notify(sender, data):
        status[0] = data[0]
        event.set()

    async def send_and_wait(data, timeout=10.0):
        event.clear()
        status[0] = None
        await client.write_gatt_char(OTA_CONTROL_POINT, data)
        try:
            await asyncio.wait_for(event.wait(), timeout)
        except asyncio.TimeoutError:
            return 255
        return status[0]

    await client.start_notify(OTA_CONTROL_POINT, on_notify)
    await asyncio.sleep(1.0)

    print("  Preparing download...")
    s = await send_and_wait(struct.pack("<BH", 1, len(fw_data)))
    if s != 0:
        print(f"  FAILED: prepare returned {s}")
        return False

    print("  Starting download...")
    s = await send_and_wait(struct.pack("<B", 2))
    if s != 0:
        print(f"  FAILED: start returned {s}")
        return False

    print("  Transferring...")
    offset = 0
    last_pct = -1
    while offset < len(fw_data):
        end = min(offset + 20, len(fw_data))
        await client.write_gatt_char(OTA_DATA, fw_data[offset:end], response=True)
        offset = end
        pct = (offset * 100) // len(fw_data)
        if pct >= last_pct + 10:
            print(f"  {pct}%")
            last_pct = pct

    WS_STATUS = {0: "OK", 1: "Unsupported command", 2: "Illegal state",
                 3: "Verification failed (CRC mismatch)", 4: "Invalid image",
                 5: "Invalid image size", 6: "More data needed",
                 7: "Invalid app ID", 8: "Invalid version"}

    print(f"  Verifying (CRC32=0x{crc:08X})...")
    s = await send_and_wait(struct.pack("<BI", 3, crc), timeout=30.0)
    await client.stop_notify(OTA_CONTROL_POINT)
    if s == 0:
        print("  BLE firmware flashed.")
        return True

    print(f"  Failed: {WS_STATUS.get(s, f'Unknown status {s}')}")
    return False


# --- Scan ---


async def scan(adapter=None):
    """Scan for CC-RT-BLE devices."""
    print("Scanning for CC-RT-BLE devices (15 seconds)...")
    print("(Put device in pairing mode first)\n")
    kwargs = {"timeout": 15.0, "return_adv": True}
    if adapter:
        kwargs["bluez"] = {"adapter": adapter}
    devices = await BleakScanner.discover(**kwargs)
    found = False
    for addr, (device, adv) in devices.items():
        name = device.name or adv.local_name or ""
        if "CC-RT" in name:
            print(f"  {addr} | {name} | RSSI: {adv.rssi}")
            found = True
    if not found:
        print("No CC-RT-BLE devices found.")
        print(f"\nAll {len(devices)} devices:")
        for addr, (device, adv) in devices.items():
            name = device.name or adv.local_name or "Unknown"
            print(f"  {addr} | {name} | RSSI: {adv.rssi}")


# --- Main ---


VERSION_TABLE = """\
 Firmware | PIN     | App versions | BLE ver | Changes
---------------------------------------------------------------------------
     1.05 | None    |        1.0.3 |     1.2 | Initial release (2015)
     1.06 | None    |        1.1.6 |     1.2 | Connection fixes
     1.10 | None    |        1.1.7 |     2.0 | Week program, extended status always sent (2016)
     1.20 | None    |  1.2.1-1.2.3 |     3.2 | Presets in status: comfort/eco/window/offset (2018)
     1.46 | 6-digit |  1.3.6-1.4.1 |     4.4 | Real BLE pairing, 6-digit passkey on LCD (2020)
     1.48 | 6-digit |  1.5.2-1.5.4 |     4.6 | Security fix, mandatory passkey (2024)

Use --noauth to flash patched BLE firmware that removes pairing completely
from all versions.

Two device variants exist: CC-RT-BLE and CC-RT-M-BLE.
The correct one is auto-detected from the BLE device name.
1.05/1.06 only have CC-RT-BLE. 1.10+ has both.

Setup on Home Assistant (SSH):
  python3 -m venv /tmp/bleflash
  /tmp/bleflash/bin/pip install bleak
  # copy flash_firmware.py and firmware/ to /tmp/bleflash/
  /tmp/bleflash/bin/python3 /tmp/bleflash/flash_firmware.py <addr> 1.48 --adapter hci0 --noauth

Before flashing:
  1. Disable the device in Home Assistant to avoid interference
  2. Make sure nothing is connected to the device (bluetoothctl, HA, phone)
  3. If the device shows "Ins", press the dial and wait for "AdA" to finish
  4. Pair if needed:
       $ bluetoothctl
       > scan on
       > pair <addr>          (accept prompt or enter 6-digit PIN from display)
       > disconnect <addr>
       > quit

Use --noauth to remove pairing completely from all firmware versions.
Use --ble-only to flash only BLE firmware (safer, MCU unchanged).

If you can't pair (e.g. PIN display is wrong after a partial flash), use
unbrick_flash.py instead — it bypasses pairing entirely using Bumble."""


def resolve_firmware_paths(version_dir: str, device_name: str, noauth: bool = False):
    """Return (mcu_path, ble_path) for a given version dir and device name."""
    if noauth:
        ble = os.path.join(version_dir, "noauth", f"ble_{device_name}.bin")
    else:
        ble = os.path.join(version_dir, f"ble_{device_name}.bin")
    mcu = os.path.join(version_dir, f"mcu_{device_name}.enc")
    return mcu, ble


async def do_flash(address, version_dir, adapter, mcu_only, ble_only, force_device_name=None, noauth=False):
    kwargs = {"timeout": 20.0}
    if adapter:
        kwargs["bluez"] = {"adapter": adapter}

    # Step 1: Connect, verify pairing works, and auto-detect variant
    print(f"Connecting to {address}...")
    try:
        async with BleakClient(address, **kwargs) as client:
            print("Connected!")

            print("Querying device info...")
            mcu_ver, ble_major, ble_minor = await query_device_info(client)

            # Read device name to select correct firmware files
            device_name = (await client.read_gatt_char("00002a00-0000-1000-8000-00805f9b34fb")).decode("utf-8", errors="replace")
            if force_device_name:
                print(f"  Device name:  {device_name} (overridden to {force_device_name})")
                device_name = force_device_name
            else:
                print(f"  Device name:  {device_name}")
            print(f"  MCU version:  {mcu_ver}")
            print(f"  BLE chip ver: {ble_major}.{ble_minor}")
            if noauth:
                print(f"  Using --noauth patched BLE firmware (no pairing)")

            mcu_fw, ble_fw = resolve_firmware_paths(version_dir, device_name, noauth)

            do_mcu = not ble_only
            do_ble = not mcu_only

            if do_mcu and not os.path.exists(mcu_fw):
                print(f"\n  ERROR: MCU firmware not found: {mcu_fw}")
                if device_name == "CC-RT-M-BLE":
                    print("  CC-RT-M-BLE variant requires firmware >= 1.10")
                return
            if do_ble and not os.path.exists(ble_fw):
                print(f"\n  ERROR: BLE firmware not found: {ble_fw}")
                if device_name == "CC-RT-M-BLE":
                    print("  CC-RT-M-BLE variant requires firmware >= 1.10")
                return

            if do_mcu and do_ble:
                print(f"\n  Will flash MCU first, then BLE (BLE resets the device).")
                print(f"  MCU: {mcu_fw}")
                print(f"  BLE: {ble_fw}")

            # Always MCU first, BLE last (BLE flash reboots the device)
            if do_mcu:
                print(f"\n--- Flashing MCU firmware ---")
                ok = await flash_mcu(client, mcu_fw)
                if not ok:
                    print("\nMCU flash failed.")
                    if do_ble:
                        print("  BLE was NOT flashed. Device is unchanged. Safe to retry.")
                    return
                print("  MCU done.")
                print("  Disconnecting...")
                await client.disconnect()

        # BLE flash needs a completely fresh bluez session after MCU flash.
        # Reconnecting in the same process fails (bluez caches stale state).
        # Solution: re-exec ourselves with --ble-only.
        if do_ble:
            if do_mcu:
                print("  Waiting for device to settle after MCU flash...")
                await asyncio.sleep(5)
                print("  Re-launching for BLE flash (fresh bluez session)...")
                import subprocess
                cmd = [sys.executable, __file__, address, os.path.basename(version_dir),
                       "--ble-only", "-y"]
                if adapter:
                    cmd += ["--adapter", adapter]
                if force_device_name:
                    cmd += ["--variant", force_device_name]
                if noauth:
                    cmd += ["--noauth"]
                result = subprocess.run(cmd, cwd=os.path.dirname(__file__))
                if result.returncode != 0:
                    print("\nBLE flash subprocess failed.")
                    print("  MCU was already flashed. Re-run with --ble-only to retry.")
                return
            else:
                # BLE-only: flash directly in this process
                async with BleakClient(address, **kwargs) as ble_client:
                    print(f"\n--- Flashing BLE firmware ---")
                    ok = await flash_ble(ble_client, ble_fw)
                    if not ok:
                        print("\nBLE flash failed. Safe to retry with --ble-only.")
                        return
                    print("  BLE done. Device will reboot.")

    except Exception as e:
        print(f"Connection failed: {e}")
        print()
        print("Possible causes:")
        print("  - Device is not paired. See --help for pairing instructions.")
        print("  - Device is connected to something else (bluetoothctl, HA, phone).")
        print("  - Device is still calibrating (shows 'Ins' or 'AdA' on LCD).")
        print("    Press the dial button if it shows 'Ins', then wait for 'AdA' to finish.")
        return

    print("\n" + "=" * 60)
    print("Done! Power cycle the device (remove/reinsert batteries).")
    print("=" * 60)


def main():
    parser = argparse.ArgumentParser(
        description="Flash firmware on EQ3 CC-RT-BLE thermostats",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog=VERSION_TABLE,
    )
    parser.add_argument(
        "address", nargs="?",
        help="BLE MAC address (e.g. 00:1A:22:XX:XX:XX) or 'scan'",
    )
    parser.add_argument(
        "version", nargs="?",
        help="Firmware version (e.g. 1.10)",
    )
    parser.add_argument("--ble-only", action="store_true", help="Flash BLE firmware only")
    parser.add_argument("--mcu-only", action="store_true", help="Flash MCU firmware only")
    parser.add_argument("--adapter", help="Bluetooth adapter (Linux, e.g. hci0)")
    parser.add_argument("--variant", choices=VALID_DEVICE_NAMES,
                        help="Force device name (CC-RT-BLE or CC-RT-M-BLE)")
    parser.add_argument("--noauth", action="store_true",
                        help="Use patched BLE firmware that disables pairing (no PIN, no auth prompts)")
    parser.add_argument("-y", "--yes", action="store_true", help="Skip confirmation")
    args = parser.parse_args()

    if not args.address:
        parser.print_help()
        return

    if args.address == "scan":
        asyncio.run(scan(adapter=args.adapter))
        return

    if not args.version:
        print("ERROR: specify a firmware version (e.g. 1.10)")
        print(f"Available: {sorted(os.listdir(FIRMWARE_DIR))}")
        sys.exit(1)

    version_dir = os.path.join(FIRMWARE_DIR, args.version)
    if not os.path.isdir(version_dir):
        print(f"ERROR: Version not found: {version_dir}")
        print(f"Available: {sorted(os.listdir(FIRMWARE_DIR))}")
        sys.exit(1)

    if not args.yes:
        print(f"Will flash {args.version} firmware to {args.address}")
        print("WARNING: Write down the current PIN even if already paired, just in case.")
        response = input("Continue? [y/N] ")
        if response.lower() != "y":
            print("Aborted.")
            return

    asyncio.run(do_flash(args.address, version_dir, args.adapter,
                         args.mcu_only, args.ble_only,
                         args.variant, args.noauth))


if __name__ == "__main__":
    main()
