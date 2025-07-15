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

re-arduino-uno/
├── Arduino-test.c # Sample C firmware for Arduino
├── Arduino-test.ino # Arduino IDE sketch
├── reverse-engineering-arduino-uno.rep # Ghidra project session file
├── reverse-engineering-ghidra.gpr # Ghidra project metadata
├── Datasheets/ # Reference PDFs for hardware components
├── Presentation/ # Slide deck used for walkthrough/tutorial
├── README.md # Project overview and instructions



## Requirements

- [Ghidra 10+](https://ghidra-sre.org/)
- [Arduino IDE](https://www.arduino.cc/en/software)
- Java 17+ (required for Ghidra)

### Hardware
- Arduino Uno (ATmega328P)
- USB A-to-B cable


### Flash the Firmware
You can flash either `Arduino-test.c` or `Arduino-test.ino` using the Arduino IDE

For `.ino`:
- Open the sketch in Arduino IDE
- Select the correct board and port
- Upload!
