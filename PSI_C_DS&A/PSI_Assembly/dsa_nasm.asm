/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: numerical.asm (NASM)
Description: Psideralis Assembler
********************************************* */ 

global myadd:function

section .data

section .bss
    
section .text

myadd:
    mov rax,rdi
    add rax,rsi
    ret