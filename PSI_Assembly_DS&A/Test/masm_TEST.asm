;/* *********************************************
;Author: Psideralis
;License: GNU GPL 3.0
;File name: 
;Description: 
;
;TODO:
;
;********************************************* */ 

INCLUDE psideralis_S.mac
INCLUDE set_S.inc
INCLUDELIB kernel32.lib

    .model flat, C
    .const
    .data

myOtherStruct STRUCT
    .field0 DB 0
    .field1 DB 0
myOtherStruct ENDS

myStruct STRUCT
    .field2 myOtherStruct <0,0>
    .field3 DB 0
myStruct ENDS

    .code
main:

END main