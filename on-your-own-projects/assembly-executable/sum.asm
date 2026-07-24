section .data
    fmt db "a + b = %d", 10, 0

section .text
    global main
    extern printf

main:
    mov eax, 5
    mov ebx, 12
    add eax, ebx

    mov esi, eax        ; second argument to printf
    mov rdi, fmt        ; first argument (format string)
    xor eax, eax        ; clear rax for variadic function
    call printf

    mov eax, 0
    ret
