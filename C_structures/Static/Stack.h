/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: ArrayList.hpp
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 
#ifndef STACK_C
#define STACK_C

typedef struct stack_s{
    
    PSI_RET (*new_stack)(stack_t);
    PSI_RET (*del_stack)(stack_t);
} stack_t;

#endif