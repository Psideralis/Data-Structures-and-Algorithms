/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: numerical_ss.s (MASM)
Description: Psideralis Assembler
********************************************* */ 
   
.DATA

.CONST

.CODE

myadd PROC var1: DWORD, var2 DWORD
    move eax, var1
    add  eax, var2
    ret
myadd ENDP