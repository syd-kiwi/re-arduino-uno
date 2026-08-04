# Windows Kernel Lab Materials

This folder holds the Lab Driver .sys and .pdb files needed to follow along with the demonstration for finding IOCTLs in a driver. Please download from this repo or directly from the flash drives on the desk.

## Assembly Instruction Quick Reference

| Instruction | Meaning |
|---|---|
| `MOV` | Move/copy data |
| `LEA` | Load effective address |
| `PUSH` | Place a value on the stack |
| `POP` | Remove a value from the stack |
| `CALL` | Call a function |
| `RET` | Return from a function; commonly marks the end of a function |
| `JMP` | Unconditional jump |
| `JE` / `JZ` | Jump if equal / zero |
| `JNE` / `JNZ` | Jump if not equal / not zero |
| `JA` | Jump if above |
| `JB` | Jump if below |
| `JG` | Jump if greater (signed) |
| `JL` | Jump if less (signed) |
| `CMP` | Compare two values |
| `SYSCALL` | System transition call |
| `IMUL` | Integer multiplication |

---

## x86-64 Register Quick Reference

| Register | Common Role |
|---|---|
| `RAX` | Return values and temporary calculations |
| `RBX` | Nonvolatile general-purpose register |
| `RCX` | 1st function argument in the Windows x64 calling convention |
| `RDX` | 2nd function argument in the Windows x64 calling convention |
| `RSP` | Stack pointer |
| `RBP` | Commonly used as a stack-frame/base pointer |
| `RSI` | Nonvolatile general-purpose register |
| `RDI` | Nonvolatile general-purpose register |
| `RIP` | Instruction pointer |

---

## Safety Notice

All future content in this folder is intended for education, authorized research, and defensive security work. Kernel experiments should be performed only in an isolated virtual machine with snapshots and no sensitive data.
