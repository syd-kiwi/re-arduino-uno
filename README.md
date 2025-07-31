# Reverse Engineering Arduino Uno with Ghidra

Welcome to the **RE Arduino Uno** project!  
This repository provides a beginner-friendly walkthrough of how to reverse engineer C code running on an Arduino Uno using [Ghidra](https://ghidra-sre.org/). It includes sample firmware, hardware setup instructions, and a Ghidra analysis flow suitable for workshops or self-paced learning.

---

## What You'll Learn

- How to compile and flash C programs to an Arduino Uno
- How to extract and analyze firmware binaries
- How to identify key functions and memory layout in disassembled code

---

## Project Structure

| File/Folder              | Description                                                |
|--------------------------|------------------------------------------------------------|
| `Datasheets/`            | Reference documents (e.g., ATmega328P datasheet)           |
| `Give_me_the_Addy/`      | Ghidra project and ELF file for reverse engineering        |
| `Presentation/`          | Slides for talk/workshop *(currently removed)*             |
| `Blink_of_an_Eye.ino`    | Blinks the onboard LED repeatedly                          |
| `Give_me_the_Addy.ino`   | Stores values and adds integers/hex                        |
| `Keep_it_Lit.ino`        | Keeps LED on and performs math operations                  |
| `secretheader.h`         | Header file simulating a secrets store                     |

## Requirements

- [Ghidra 11](https://github.com/NationalSecurityAgency/ghidra/releases)
- [Arduino IDE Cloud Website](https://app.arduino.cc/)
- [Device Driver](https://cloud.arduino.cc/download-agent)

### Hardware
- Arduino Uno (ATmega328P)
- USB-A to USB-B cable


### Flash the Firmware
You can flash either `Arduino-test.c` or `Arduino-test.ino` using the Arduino IDE

For `.ino`:
- Open the sketch in Arduino IDE
- Select the correct board and port
- Upload!
