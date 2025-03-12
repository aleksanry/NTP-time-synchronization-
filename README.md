# ESP32 Basic NTP Example

This example demonstrates how to:
1. Connect to WiFi
2. Synchronize time using NTP
3. Print the current time periodically

## Requirements
- ESP32 (Tested on ESP32 DevKit v1)
- Arduino IDE with ESP32 libraries

## Installation
1. Replace `YOUR_SSID` and `YOUR_PASSWORD` in the code
2. Upload to the ESP32

## Features
- Automatic WiFi connection
- NTP synchronization with pool.ntp.org
- Periodic time printing in the serial monitor

## Customization
- Adjust timezone in `configTime()`
- Change the time printing interval in `loop()`
