# ChronoRoot: Time-Traveling Through Kernel Trust Boundaries

Welcome to the **ChronoRoot** presentation and lab repository.

ChronoRoot connects beginner-friendly reverse engineering foundations with deeper Windows kernel security concepts. The original material introduces reverse engineering through Arduino firmware, C code, memory, registers, hardware I/O, and Ghidra. The updated presentation builds on those same skills to examine Windows drivers, IOCTL interfaces, kernel trust boundaries, and Bring Your Own Vulnerable Driver (BYOVD) techniques.

In the cyberpunk underground, trust is the most valuable exploit. ChronoRoot explores how attackers can abuse legitimately signed but vulnerable drivers to cross kernel trust boundaries, perform unsafe memory operations, escalate privileges, or bypass security controls.

---

## Presentation Overview

The original ChronoRoot material focused on making reverse engineering approachable through Arduino firmware and Ghidra. Attendees learned how source code becomes machine instructions and how to inspect compiled programs through disassembly, decompilation, registers, memory, and hardware interaction.

The updated **ChronoRoot: Time-Traveling Through Kernel Trust Boundaries** presentation takes those same foundational concepts deeper into the Windows kernel. It explores how vulnerable signed drivers expose dangerous functionality through IOCTL interfaces and how reverse engineering can reveal weaknesses in trusted kernel components.

### Slides

- **[Current ChronoRoot Presentation – Time-Traveling Through Kernel Trust Boundaries](https://github.com/syd-kiwi/chrono-root/blob/main/Presentation/ChronoRoot%20%20Time-Traveling%20Through%20Kernel%20Trust%20Boundaries%20%281%29.pptx.zip)**
- **[Original Reverse Engineering Slides](https://github.com/syd-kiwi/chrono-root/blob/main/Presentation/Reverse%20Engineering%20Slides.pptx)**

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

## Repository Structure

| File/Folder | Description |
|---|---|
| `Datasheets/` | Reference documents for Arduino Uno components |
| [`Presentation/`](https://github.com/syd-kiwi/chrono-root/tree/main/Presentation) | Current ChronoRoot presentation and original reverse-engineering slide deck |
| `Presentation/ChronoRoot  Time-Traveling Through Kernel Trust Boundaries (1).pptx.zip` | Updated ChronoRoot slide deck covering Windows kernel trust boundaries and BYOVD |
| `Presentation/Reverse Engineering Slides.pptx` | Original beginner-friendly reverse-engineering slide deck |
| [`on-your-own-projects/`](https://github.com/syd-kiwi/chrono-root/tree/main/on-your-own-projects) | Reverse-engineering foundations, Arduino exercises, assembly references, and Ghidra walkthroughs |
| [`windows-kernel-lab/`](https://github.com/syd-kiwi/chrono-root/tree/main/windows-kernel-lab) | Windows kernel driver, BYOVD, and reverse-engineering lab materials |

---

## Track 1: Reverse Engineering Foundations

The beginner track uses Arduino firmware and Ghidra to make reverse engineering visible and approachable. It covers source code, assembly, registers, memory, control flow, firmware flashing, and ELF analysis.

For the full lab instructions, assembly cheat sheet, register reference, project files, and Ghidra walkthrough, see:

**[Reverse Engineering Foundations → `on-your-own-projects/`](https://github.com/syd-kiwi/chrono-root/tree/main/on-your-own-projects)**

---

## Track 2: Windows Kernel Trust Boundaries

The `windows-kernel-lab/` materials extend the reverse-engineering workflow into Windows driver analysis.

Planned and developing content includes:

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

See the lab folder here:

**[Windows Kernel Lab → `windows-kernel-lab/`](https://github.com/syd-kiwi/chrono-root/tree/main/windows-kernel-lab)**

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
- **Updated ChronoRoot presentation:** Available
