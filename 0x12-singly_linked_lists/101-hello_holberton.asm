section .data
    msg db "Hello, Holberton",10      ; Prints the message Hello Holberton (LF)

section .text
    global _start

_start:
    mov rax, 1
    mov rdi, 1
    mov rsi, msg
    mov rdx, 13
    syscall

    mov rax, 60
    mov rdi, 0
    syscall
