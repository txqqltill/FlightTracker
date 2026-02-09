# FlightTracker

A real-time flight tracking system based on the RP2350 microcontroller and an ESP8266 WiFi module. The project fetches live aviation data from FlightRadar APIs via RapidAPI and displays it on an LCD screen.

## Deployment Process

To get the FlightTracker up and running, follow these steps:

### 1. Configuration (Secrets)
Before compiling, you must configure your network and API credentials:
* Navigate to the `secrets/` directory.
* Rename `Secrets.h.template` to `Secrets.h`.
* Open `Secrets.h` and enter your WiFi SSID, WiFi Password, and your RapidAPI Key for the `flight-radar1` API.

### 2. ESP8266 WiFi Module
The ESP8266 acts as a network bridge for the RP2350.
* Prepare your RP2350 with a WiFi Programmer to enable serial communication with the ESP8266.
* Navigate to the `ESP8266/` directory.
* Run the deployment script: `./deploy.sh`. This script creates a build directory, runs CMake, and uploads the firmware to the ESP8266.

### 3. RP2350 Main Controller
* The main application logic resides in `RP2350/FlightTracker.cpp`.
* Compile and flash this file onto your RP2350 using the [YAHAL framework](https://git.fh-aachen.de/Terstegge/YAHAL).

## Architecture

The project follows a modular architecture designed for embedded systems with limited resources:

* **Dual-Controller Setup**: The **RP2350** handles the UI, user input (Joystick/Buttons), and overall application logic. The **ESP8266** serves as a dedicated communication processor, handling HTTPS requests and JSON filtering.
* **Inter-Processor Communication**: The two boards communicate via UART at 460,800 baud. The RP2350 sends commands like `LIST`, `ROUTE`, or `SEARCH`, and the ESP8266 responds with JSON data terminated by a `0x04` (EOT) character.
* **State Management**: A `SubmenuManager` tracks the UI state (Main Menu, Top Flights, Route Search, etc.), while specific managers handle the data display for individual flights.

## Technical Details

* **JSON Filtering**: To save memory on the RP2350, the ESP8266 performs "on-the-fly" JSON filtering. The `streamFilteredJSON` function removes heavy objects like "images" and reduces "trail" data to the first item before sending it over UART.
* **Memory Management**: The RP2350 uses a fixed 16KB RX buffer to receive incoming serial data.
* **Caching**: The `API` class implements a basic caching mechanism to store flight details, reducing the number of network requests and improving UI responsiveness.
* **Peripherals**:
    * **Display**: ST7735S 128x128 LCD via SPI.
    * **Input**: Joystick and Buttons via the EDU MKII BoosterPack mappings.
    * **Logging**: Serial-based logging for system events and debugging.