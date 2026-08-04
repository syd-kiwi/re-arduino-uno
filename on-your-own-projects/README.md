# ChronoRoot: Reverse Engineering Foundations

This folder contains the beginner-friendly, hands-on reverse-engineering portion of ChronoRoot.

The exercises use Arduino firmware, native binaries, assembly, and Ghidra to show how source code becomes machine instructions and how compiled programs can be inspected through disassembly, decompilation, registers, memory, strings, and control flow.

[← Back to the main ChronoRoot README](../README.md)

---

## Folder Contents

| File/Folder | Description |
|---|---|
| `Blink_of_an_Eye.ino` | Blinks the onboard LED for 30 seconds |
| `Blink_Project.ino` | Multi-stage blink show with ramp, heartbeat, and countdown |
| `Give_me_the_Addy.ino` | Adds decimal and hexadecimal values, then prints mock credentials |
| `Keep_it_Lit.ino` | Reads a blink count from Serial and flashes the LED |
| `secretheader.h` | Header file simulating a secrets store |
| `assembly-executable/` | Example C code, assembly, object, and executable files |
| `Give_me_the_Addy/` | Ghidra project and ELF file for reverse engineering |

---

## Requirements

- [Ghidra 11](https://github.com/NationalSecurityAgency/ghidra/releases)
- [Arduino IDE](https://www.arduino.cc/en/software) or [Arduino Cloud Editor](https://app.arduino.cc/)
- [Arduino Cloud Agent](https://cloud.arduino.cc/download-agent), when using the cloud editor

### Hardware

- Arduino Uno with an ATmega328P microcontroller
- USB-A to USB-B cable

---

## Suggested Lab Flow

1. Open `../Presentation/Reverse Engineering Slides.pptx` for the original talk track.
2. Flash one or more sketches in this folder to the Arduino Uno.
3. Import the compiled ELF file into Ghidra.
4. Run auto-analysis using the AVR processor configuration.
5. Compare the source code with the disassembly and decompiled output.
6. Inspect functions, memory-mapped I/O, registers, strings, and control flow.

---

## Flashing Arduino Firmware

1. Open the Arduino IDE or Arduino Cloud Editor.
2. Connect the Arduino Uno through USB.
3. Open one of the following sketches:
   - `Blink_of_an_Eye.ino`
   - `Blink_Project.ino`
   - `Give_me_the_Addy.ino`
   - `Keep_it_Lit.ino`
4. Select **Arduino Uno** as the board.
5. Select the correct port.
6. Upload the sketch and observe its behavior.

---

## Analyzing the ELF in Ghidra

1. Open Ghidra and create a new project.
2. Import `Give_me_the_Addy/Give_me_the_Addy.ino.elf`.
3. Select the AVR processor language and the ATmega328 variant when prompted.
4. Run auto-analysis.
5. Navigate to `main()` and other relevant functions.
6. Compare the decompiled output with the original sketch.
7. Inspect memory-mapped I/O such as `PORTB` and `DDRB`.

---

## What to Look For

As you work through the examples, focus on connecting higher-level source code to what appears in the compiled program:

- Function calls and returns
- Conditional and unconditional jumps
- Register usage
- Stack behavior
- Strings and constants
- Memory addresses
- Hardware I/O
- Decompiled control flow

The goal is not to memorize every assembly instruction. The goal is to become comfortable recognizing common patterns and using Ghidra to investigate what a binary is doing.
