;/* *********************************************
;Author: Psideralis
;License: GNU GPL 3.0
;File name: 
;Description: 
;
;TODO:
;
;********************************************* */ 

.include "psideralis_s.mac"

.data
.bss
.text
.global _start
    _start:
        mov %edi, %r1 
        mov %esi, %r2 
        mov %rdx, %r3
        mov %rcx, %r4
        mov %r8, %r5 
        mov %r9, %r6 
        pop %r7
        mov $0, %eax
        ret

.func    _return_setptr:
        mov $0, %eax
        ret
.endf

.func    _return_setvalueptr:
        mov (%edx), %eax
        ret
.endf