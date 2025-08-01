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
| `Presentation/`          | Slides for talk/workshop                                   |
| `assembly-executable/'    | Example C code, assembly and executable files              |
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

## Usage Instructions

### Flashing Arduino Firmware

1. **Open Arduino IDE**  
   Download it from [arduino.cc](https://www.arduino.cc/en/software).

2. **Connect Your Arduino Uno**  
   Plug in your board via USB.

3. **Choose a Sketch**  
   Open one of the following files from this repo:
   - `Blink_of_an_Eye.ino`
   - `Give_me_the_Addy.ino`
   - `Keep_it_Lit.ino`

4. **Select Your Board and Port**
   - `Tools > Board > Arduino Uno`
   - `Tools > Port` → Select the correct COM port

5. **Upload the Code**  
   Click the **Upload** button (right-facing arrow).  
   Your Arduino should run the sketch and control the onboard LED.

### Analyzing in Ghidra

1. **Open Ghidra** and create a new project.
2. Import `Give_me_the_Addy/firmware.elf`.
3. When prompted:
   - Select `Processor: AVR`
   - Variant: `atmega328`
4. Run **Auto-Analysis**.
5. Explore the disassembly and decompiled views:
   - Navigate to `main()` or inspect memory-mapped I/O (e.g., `PORTB`, `DDRB`).

