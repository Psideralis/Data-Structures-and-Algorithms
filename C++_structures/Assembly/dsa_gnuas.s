/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: numerical_s.s (GNU AS)
Description: Psideralis Assembler
********************************************* */ 

.global myadd

.type myadd, %function

.data

.bss

.text

myadd:
    .func myadd
        mov %rdi,%rax
        add %rsi,%rax
        ret
    .endfunc