# 🔍 Reverse Engineering Arduino Uno with Ghidra

Welcome to the **RE Arduino Uno** project!  
This repository provides a beginner-friendly walkthrough of how to reverse engineer C code running on an Arduino Uno using [Ghidra](https://ghidra-sre.org/). It includes sample firmware, hardware setup instructions, and a Ghidra analysis flow suitable for workshops or self-paced learning.

---

## 🧠 What You'll Learn

- How to compile and flash C programs to an Arduino Uno
- How to extract and analyze firmware binaries
- How to use Ghidra to reverse engineer AVR binaries
- How to identify key functions and memory layout in disassembled code
- How to interpret register values and basic I/O interactions

---

## 📁 Project Structure

re-arduino-uno/
├── firmware/ # C source code and compiled .hex binaries
├── ghidra/ # Ghidra project exports and analysis notes
├── docs/ # Slides, diagrams, and architecture reference
├── scripts/ # Flashing, dumping, and helper scripts
├── images/ # Pinouts, board diagrams, annotated screenshots
└── README.md # This file
