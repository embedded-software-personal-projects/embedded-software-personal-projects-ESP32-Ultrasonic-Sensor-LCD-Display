# embedded-software-personal-projects-ESP32-Ultrasonic-Sensor-LCD-Display

# ESP32 Ultrasonic Sensor and I2C LCD Display

This repository contains code and wiring instructions for an ESP32 project that measures distance using an HC-SR04 ultrasonic sensor and displays the result on a Freenove I2C LCD 1602 display module.


## Prerequisites

Before you begin, ensure you have the following components:

- ESP32 microcontroller
- HC-SR04 Ultrasonic Sensor
- Freenove I2C LCD 1602 Display Module
- PlatformIO IDE (or Arduino IDE)

## Wiring Instructions

### HC-SR04 Ultrasonic Sensor:

- VCC to 5V (or ESP32 5V output, if available)
- Trig to any digital GPIO pin (e.g., GPIO 12)
- Echo to any digital GPIO pin (e.g., GPIO 13)
- GND to GND

### I2C LCD 1602 Display Module:

- VCC to 5V (or ESP32 5V output, if available)
- GND to GND
- SDA to ESP32's GPIO 21
- SCL to ESP32's GPIO 22

## PlatformIO Setup

1. Create a new PlatformIO project or add this code to an existing project.

2. Make sure you have the ESP32 board support installed in your PlatformIO environment.

3. Install the "LiquidCrystal I2C" library if it's not already installed. You can do this by adding it to your `platformio.ini` file.

## Usage

1. Upload the code to your ESP32 using PlatformIO.

2. Open the serial monitor to view the distance measurements.

3. The measured distance will also be displayed on the LCD.

## Output

