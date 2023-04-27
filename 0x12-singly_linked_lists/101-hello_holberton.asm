section .data
    message db "Hello, Holberton!", 0Ah, 0

section .text
    global _start

_start:
    ; call printf to print message
    mov rdi, message
    xor rax, rax
    call printf
    
    ; exit program
    xor rax, rax
    ret

