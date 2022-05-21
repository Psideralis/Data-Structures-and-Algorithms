;/* *********************************************
;Author: Psideralis
;License: GNU GPL 3.0
;File name: 
;Description: 
;
;TODO:
;
;********************************************* */ 

  global _start

%include "psideralis.mac"
%include "set.inc"

%macro write_string 2 
    mov   eax, 4
    mov   ebx, 1
    mov   ecx, %1
    mov   edx, %2
    int   80h
%endmacro

  section .data

example:
  istruc set
    at set.size,  dq 0
    at set.entry, istruc map
        at map.key,   dq 0
        at map.value, dq 0
        at map.link,  dq 0
      iend
    at set.link,  dq 0
  iend

  section .bss

  section .text

_start:

proc_name:

  ret