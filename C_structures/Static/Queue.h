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
#ifndef QUEUE_C
#define QUEUE_C

typedef struct queue_s{
    
    PSI_RET (*new_queue)(queue_t);
    PSI_RET (*del_queue)(queue_t);
} queue_t;

#endif