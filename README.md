# ChronoRoot Presentation: Reverse Engineering

Welcome to the **ChronoRoot** reverse engineering presentation repo.  
This project supports a beginner-friendly walkthrough of how to reverse engineer C code running on an Arduino Uno using [Ghidra](https://ghidra-sre.org/). It includes presentation slides, sample Arduino firmware, hardware references, and a guided analysis flow that can be used during the talk or for self-paced practice afterward.

---

## Presentation Goals

- How to compile and flash C programs to an Arduino Uno
- How to extract and analyze firmware binaries
- How to identify key functions and memory layout in disassembled code
- How small source-level choices appear in compiled AVR output

---

## Project Structure

| File/Folder                                      | Description                                                |
|--------------------------------------------------|------------------------------------------------------------|
| `Datasheets/`                                    | Reference documents for the Arduino Uno components         |
| `Presentation/Reverse Engineering Slides.pptx`   | Slide deck for the ChronoRoot presentation                  |
| `on-your-own-projects/`                          | Arduino sketches, native examples, and Ghidra project data |
| `on-your-own-projects/Blink_of_an_Eye.ino`       | Blinks the onboard LED for 30 seconds                      |
| `on-your-own-projects/Blink_Project.ino`         | Multi-stage blink show with ramp, heartbeat, and countdown |
| `on-your-own-projects/Give_me_the_Addy.ino`      | Adds decimal and hex values, then prints mock credentials  |
| `on-your-own-projects/Keep_it_Lit.ino`           | Reads a blink count from Serial and flashes the LED        |
| `on-your-own-projects/secretheader.h`            | Header file simulating a secrets store                     |
| `on-your-own-projects/assembly-executable/`      | Example C code, assembly, object, and executable files     |
| `on-your-own-projects/Give_me_the_Addy/`         | Ghidra project and ELF file for reverse engineering        |

## Requirements

- [Ghidra 11](https://github.com/NationalSecurityAgency/ghidra/releases)
- [Arduino IDE Cloud Website](https://app.arduino.cc/)
- [Device Driver](https://cloud.arduino.cc/download-agent)

### Hardware
- Arduino Uno (ATmega328P)
- USB-A to USB-B cable

## Presentation Flow

1. Start with `Presentation/Reverse Engineering Slides.pptx` for the talk track.
2. Flash one or more sketches from `on-your-own-projects/` to the Arduino Uno.
3. Open the compiled ELF in Ghidra and run auto-analysis.
4. Compare the source sketches to the disassembly and decompiled views.

## Usage Instructions

### Flashing Arduino Firmware

1. **Open Arduino IDE**  
   Download it from [arduino.cc](https://www.arduino.cc/en/software).

2. **Connect Your Arduino Uno**  
   Plug in your board via USB.

3. **Choose a Sketch**  
   Open one of the following files from `on-your-own-projects/`:
   - `Blink_of_an_Eye.ino`
   - `Blink_Project.ino`
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
2. Import `on-your-own-projects/Give_me_the_Addy/Give_me_the_Addy.ino.elf`.
3. When prompted:
   - Select `Processor: AVR`
   - Variant: `atmega328`
4. Run **Auto-Analysis**.
5. Explore the disassembly and decompiled views:
   - Navigate to `main()` or inspect memory-mapped I/O (e.g., `PORTB`, `DDRB`).
