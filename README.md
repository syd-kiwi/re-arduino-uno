# ChronoRoot: Time-Traveling Through Kernel Trust Boundaries

Welcome to the **ChronoRoot** presentation and lab repository.

ChronoRoot connects beginner-friendly reverse engineering foundations with deeper Windows kernel security concepts. The original material introduces reverse engineering through Arduino firmware, C code, memory, registers, hardware I/O, and Ghidra. The new presentation builds on those same skills to examine Windows drivers, IOCTL interfaces, kernel trust boundaries, and Bring Your Own Vulnerable Driver (BYOVD) techniques.

In the cyberpunk underground, trust is the most valuable exploit. ChronoRoot explores how attackers can abuse legitimately signed but vulnerable drivers to cross kernel trust boundaries, perform unsafe memory operations, escalate privileges, or bypass security controls.

---

## Presentation Overview

Last year, this project focused on making reverse engineering approachable through Arduino firmware and Ghidra. Attendees learned how source code becomes machine instructions and how to inspect compiled programs through disassembly, decompilation, registers, memory, and hardware interaction.

This year, ChronoRoot takes those same foundational concepts deeper into the Windows kernel. The presentation will explore how vulnerable signed drivers expose dangerous functionality through IOCTL interfaces and how reverse engineering can reveal weaknesses in trusted kernel components.

Topics include:

- Reverse-engineering fundamentals with Ghidra
- Source code, assembly, registers, memory, and control flow
- Arduino firmware extraction and analysis
- Windows driver architecture and trust boundaries
- User-mode to kernel-mode communication
- IOCTL discovery and analysis
- Unsafe kernel memory operations
- BYOVD concepts and case studies
- Privilege escalation and security-control bypass
- Defensive detection, mitigation, and responsible research practices

---

## Learning Goals

By working through the presentation and supporting materials, participants should be able to:

- Explain how source code is represented in compiled binaries
- Navigate disassembly and decompiled code in Ghidra
- Identify important functions, strings, memory regions, and control flow
- Understand how applications communicate with Windows drivers
- Recognize the role of IOCTL handlers in driver attack surfaces
- Describe how vulnerable signed drivers can undermine kernel trust
- Connect beginner reverse-engineering techniques to real-world kernel security research
- Conduct experiments safely in an isolated and authorized environment

---

## Repository Structure

| File/Folder | Description |
|---|---|
| `Datasheets/` | Reference documents for Arduino Uno components |
| `Presentation/Reverse Engineering Slides.pptx` | Original beginner-friendly reverse-engineering slide deck |
| `on-your-own-projects/` | Arduino sketches, native examples, binaries, and Ghidra project data |
| `on-your-own-projects/Blink_of_an_Eye.ino` | Blinks the onboard LED for 30 seconds |
| `on-your-own-projects/Blink_Project.ino` | Multi-stage blink show with ramp, heartbeat, and countdown |
| `on-your-own-projects/Give_me_the_Addy.ino` | Adds decimal and hexadecimal values, then prints mock credentials |
| `on-your-own-projects/Keep_it_Lit.ino` | Reads a blink count from Serial and flashes the LED |
| `on-your-own-projects/secretheader.h` | Header file simulating a secrets store |
| `on-your-own-projects/assembly-executable/` | Example C code, assembly, object, and executable files |
| `on-your-own-projects/Give_me_the_Addy/` | Ghidra project and ELF file for reverse engineering |
| `windows-kernel-lab/` | Placeholder for upcoming Windows driver, IOCTL, BYOVD, and kernel-analysis materials |

---

## Track 1: Reverse Engineering Foundations

The original hands-on material uses an Arduino Uno to make reverse engineering visible and approachable.

### Requirements

- [Ghidra 11](https://github.com/NationalSecurityAgency/ghidra/releases)
- [Arduino IDE](https://www.arduino.cc/en/software) or [Arduino Cloud Editor](https://app.arduino.cc/)
- [Arduino Cloud Agent](https://cloud.arduino.cc/download-agent), when using the cloud editor

### Hardware

- Arduino Uno with an ATmega328P microcontroller
- USB-A to USB-B cable

### Suggested Lab Flow

1. Open `Presentation/Reverse Engineering Slides.pptx` for the original talk track.
2. Flash one or more sketches from `on-your-own-projects/` to the Arduino Uno.
3. Import the compiled ELF file into Ghidra.
4. Run auto-analysis using the AVR processor configuration.
5. Compare the source code with the disassembly and decompiled output.
6. Inspect functions, memory-mapped I/O, registers, strings, and control flow.

### Flashing Arduino Firmware

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

### Analyzing the ELF in Ghidra

1. Open Ghidra and create a new project.
2. Import `on-your-own-projects/Give_me_the_Addy/Give_me_the_Addy.ino.elf`.
3. Select the AVR processor language and the ATmega328 variant when prompted.
4. Run auto-analysis.
5. Navigate to `main()` and other relevant functions.
6. Compare the decompiled output with the original sketch.
7. Inspect memory-mapped I/O such as `PORTB` and `DDRB`.

---

## Track 2: Windows Kernel Trust Boundaries

The upcoming `windows-kernel-lab/` materials will extend the reverse-engineering workflow into Windows driver analysis.

Planned content includes:

- Windows driver reverse-engineering examples
- Driver loading and architecture notes
- IOCTL analysis diagrams and walkthroughs
- User-mode and kernel-mode communication examples
- Safe vulnerable-driver case studies
- Ghidra or other static-analysis exercises
- BYOVD background and defensive guidance
- Virtual machine setup and snapshot instructions
- Detection, mitigation, and responsible disclosure notes
- Presentation demonstrations and supporting files

The folder currently contains a placeholder README and will be expanded as the presentation develops.

---

## Safety and Ethics

This repository is intended for education, authorized security research, and defensive analysis.

Kernel experiments can crash or corrupt a system. Perform all Windows driver research inside an isolated virtual machine with snapshots, no sensitive information, and no access to production systems. Only analyze software and systems that you own or have explicit permission to test.

The goal of this project is to understand how trust boundaries fail so defenders, researchers, and developers can identify and reduce those risks.

---

## Project Status

- **Reverse-engineering foundations:** Available
- **Arduino and Ghidra exercises:** Available
- **Windows kernel lab:** In development
- **BYOVD and IOCTL demonstrations:** Planned
- **Updated ChronoRoot presentation:** In development
