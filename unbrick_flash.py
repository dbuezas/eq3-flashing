#!/usr/bin/env python3
"""
Flash EQ3 BLE firmware using Google's Bumble library — no PIN required.

Useful when a device is locked out and you can't read the PIN from the
display (e.g. MCU was downgraded but BLE still has PIN-enforced firmware,
so the display shows fewer digits than the BLE chip expects).

Bumble bypasses the Linux kernel's BLE SMP enforcement by talking directly
to the HCI adapter. The device sends an SMP Security Request after
connection, but Bumble ignores it, and the device accepts GATT operations
anyway.

Requirements:
    pip install bumble

Usage:
    unbrick_flash.py <address> <version> [--adapter hci0] [--variant CC-RT-BLE] [--noauth]

    address:   BLE MAC (e.g. 00:1A:22:12:B6:05)
    version:   Firmware version directory name (e.g. 1.10)
    --adapter: Bluetooth adapter (default: hci0)
    --variant: Force device name (CC-RT-BLE or CC-RT-M-BLE)
    --noauth:  Use patched BLE firmware that disables pairing

Note: Requires root (raw HCI socket). Temporarily takes exclusive control
of the HCI adapter (brings it down, then back up when done).
"""
import asyncio
import fcntl
import os
import socket
import struct
import sys
from pathlib import Path

from bumble.device import Device
from bumble.hci import Address, OwnAddressType
from bumble.host import Host
from bumble.transport import open_transport

FIRMWARE_DIR = os.path.join(os.path.dirname(__file__), "firmware")

# BLE OTA UUIDs (WICED Smart ws_upgrade)
OTA_CONTROL_UUID = "E3DD50BF-F7A7-4E99-838E-570A086C666B"
OTA_DATA_UUID = "92E86C7A-D961-4091-B74F-2409E72EFE36"

HCIDEVDOWN = 0x400448CA
HCIDEVUP = 0x400448C9


# --- CRC32 (Broadcom WICED variant) ---


def _bitrev(value, width):
    result = 0
    for i in range(width):
        if value & (1 << i):
            result |= 1 << (width - 1 - i)
    return result


def crc32_wiced(data):
    crc = 0xFFFFFFFF
    for byte in data:
        crc ^= _bitrev(byte, 8) << 24
        for _ in range(8):
            if crc & 0x80000000:
                crc = ((crc << 1) ^ 0x04C11DB7) & 0xFFFFFFFF
            else:
                crc = (crc << 1) & 0xFFFFFFFF
    return _bitrev(crc, 32) ^ 0xFFFFFFFF


# --- Variant detection ---
# Two firmware variants exist, differing mainly in the device name they set:
#   "CC-RT-BLE"   → bleupdate.bin   (device name embedded in firmware)
#   "CC-RT-M-BLE" → bleupdate_2.bin (device name embedded in firmware)
# The app selects variant by reading the current device name.

DEVICE_NAME_PRIMARY = "CC-RT-BLE"
DEVICE_NAME_ALTERNATIVE = "CC-RT-M-BLE"


VALID_DEVICE_NAMES = ["CC-RT-BLE", "CC-RT-M-BLE"]


def resolve_ble_firmware(version_dir, device_name, noauth=False):
    """Return BLE firmware path for the given version and device name."""
    subdir = "noauth" if noauth else ""
    path = os.path.join(version_dir, subdir, f"ble_{device_name}.bin")
    return path


# --- HCI adapter control ---


def hci_down(hci_idx):
    ctl = socket.socket(socket.AF_BLUETOOTH, socket.SOCK_RAW, socket.BTPROTO_HCI)
    try:
        fcntl.ioctl(ctl.fileno(), HCIDEVDOWN, hci_idx)
    except Exception as e:
        print(f"  Warning bringing hci{hci_idx} down: {e}")
    ctl.close()


def hci_up(hci_idx):
    ctl = socket.socket(socket.AF_BLUETOOTH, socket.SOCK_RAW, socket.BTPROTO_HCI)
    try:
        fcntl.ioctl(ctl.fileno(), HCIDEVUP, hci_idx)
    except Exception as e:
        print(f"  Warning bringing hci{hci_idx} up: {e}")
    ctl.close()


async def main():
    import argparse
    parser = argparse.ArgumentParser(
        description="Flash EQ3 BLE firmware via Bumble (bypasses SMP, no PIN needed)")
    parser.add_argument("address", help="BLE MAC address (e.g. 00:1A:22:12:B6:05)")
    parser.add_argument("version", help="Firmware version (e.g. 1.10)")
    parser.add_argument("--adapter", default="hci0",
                        help="Bluetooth adapter (default: hci0)")
    parser.add_argument("--variant", choices=VALID_DEVICE_NAMES,
                        help="Force device name (CC-RT-BLE or CC-RT-M-BLE)")
    parser.add_argument("--noauth", action="store_true",
                        help="Use patched BLE firmware that disables pairing")
    args = parser.parse_args()

    address = args.address
    version = args.version
    # Parse hci index from adapter name (e.g. "hci0" -> 0)
    try:
        hci_idx = int(args.adapter.replace("hci", ""))
    except ValueError:
        print(f"ERROR: Invalid adapter '{args.adapter}', expected e.g. hci0")
        return
    force_device_name = args.variant
    noauth = args.noauth

    version_dir = os.path.join(FIRMWARE_DIR, version)
    if not os.path.isdir(version_dir):
        print(f"ERROR: Version not found: {version_dir}")
        print(f"Available: {sorted(os.listdir(FIRMWARE_DIR))}")
        return

    print(f"Bringing hci{hci_idx} down...")
    hci_down(hci_idx)

    try:
        async with await open_transport(f"hci-socket:{hci_idx}") as (
            hci_source,
            hci_sink,
        ):
            device = Device(name="eq3flasher", host=Host(hci_source, hci_sink))
            device.classic_smp_enabled = False
            device.le_smp_enabled = False
            await device.power_on()

            print(f"Connecting to {address}...")
            connection = await asyncio.wait_for(
                device.connect(
                    Address(address, address_type=Address.PUBLIC_DEVICE_ADDRESS),
                    own_address_type=OwnAddressType.PUBLIC,
                ),
                timeout=15.0,
            )
            print(f"Connected! handle=0x{connection.handle:04X}")

            connection.on(
                "disconnection",
                lambda reason: print(f"  !! DISCONNECTED: reason={reason}"),
            )
            connection.on(
                "security_request",
                lambda *a: print("  (Security request ignored — bypassing SMP)"),
            )

            client = connection.gatt_client

            # --- Step 1: Discover services and query device info ---
            print("Discovering services...")
            await client.discover_services()

            device_name_char = None
            ota_control = None
            ota_data = None

            for svc in client.services:
                try:
                    await svc.discover_characteristics()
                except Exception as e:
                    print(f"  !!! Characteristic discovery failed for {svc.uuid}: {e}")
                    continue
                for char in svc.characteristics:
                    uuid_str = str(char.uuid).upper()
                    # Device Name (0x2A00) in Generic Access service
                    if uuid_str == "2A00":
                        device_name_char = char
                    elif uuid_str == OTA_CONTROL_UUID:
                        ota_control = char
                    elif uuid_str == OTA_DATA_UUID:
                        ota_data = char

            if not ota_control or not ota_data:
                print("ERROR: OTA service not found!")
                return

            # --- Step 2: Read device name and detect variant ---
            # Read device name to select correct firmware files
            if device_name_char:
                name_bytes = await device_name_char.read_value()
                device_name = bytes(name_bytes).decode("utf-8", errors="replace")
                if force_device_name:
                    print(f"  Device name:  {device_name} (overridden to {force_device_name})")
                    device_name = force_device_name
                else:
                    print(f"  Device name:  {device_name}")
            else:
                if force_device_name:
                    device_name = force_device_name
                    print(f"  Could not read device name, using: {device_name}")
                else:
                    print("WARNING: Could not read device name.")
                    print("  Use --variant CC-RT-BLE or --variant CC-RT-M-BLE.")
                    return

            # --- Step 3: Resolve firmware path ---
            ble_fw = resolve_ble_firmware(version_dir, device_name, noauth)
            if noauth:
                print(f"  Using --noauth patched BLE firmware")
            if not os.path.exists(ble_fw):
                print(f"ERROR: BLE firmware not found: {ble_fw}")
                if device_name == "CC-RT-M-BLE":
                    print(
                        "  CC-RT-M-BLE variant requires firmware >= 1.10"
                    )
                return

            fw_data = Path(ble_fw).read_bytes()
            crc = crc32_wiced(fw_data)
            print(f"\nFirmware: {ble_fw}")
            print(f"  {len(fw_data)} bytes, CRC32: 0x{crc:08X}")

            # --- Step 4: Subscribe to OTA notifications ---
            print(f"\nOTA Control: handle=0x{ota_control.handle:04X}")
            print(f"OTA Data:    handle=0x{ota_data.handle:04X}")

            notification_queue = asyncio.Queue()

            def on_notify(value):
                notification_queue.put_nowait(bytes(value))

            await ota_control.discover_descriptors()
            await ota_control.subscribe(on_notify)

            async def wait_notify(timeout=10.0):
                try:
                    return await asyncio.wait_for(
                        notification_queue.get(), timeout
                    )
                except asyncio.TimeoutError:
                    return None

            # --- Step 5: Flash BLE firmware ---
            print("\n--- Flashing BLE firmware ---")

            print("  Preparing download...")
            await ota_control.write_value(
                struct.pack("<BH", 1, len(fw_data)), with_response=True
            )
            resp = await wait_notify()
            if resp is None or resp[0] != 0:
                print(f"  Failed prepare: {resp}")
                return

            print("  Starting download...")
            await ota_control.write_value(
                struct.pack("<B", 2), with_response=True
            )
            resp = await wait_notify()
            if resp is None or resp[0] != 0:
                print(f"  Failed start: {resp}")
                return

            print("  Transferring...")
            offset = 0
            last_pct = -1
            while offset < len(fw_data):
                end = min(offset + 20, len(fw_data))
                await ota_data.write_value(
                    fw_data[offset:end], with_response=True
                )
                offset = end
                pct = (offset * 100) // len(fw_data)
                if pct >= last_pct + 10:
                    print(f"    {pct}%")
                    last_pct = pct

            print(f"  Verifying (CRC32=0x{crc:08X})...")
            await ota_control.write_value(
                struct.pack("<BI", 3, crc), with_response=True
            )
            resp = await wait_notify(timeout=30.0)
            if resp and resp[0] == 0:
                print("\n  BLE firmware flashed successfully!")
                print("  Device will reboot.")
            elif resp:
                print(f"\n  Verify failed: {resp.hex()}")
            else:
                # Timeout often means device rebooted (success)
                print("\n  No verify response (device likely rebooted — flash probably succeeded)")
    finally:
        print(f"\nBringing hci{hci_idx} back up...")
        hci_up(hci_idx)


asyncio.run(main())
