/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Queue.hpp
Description:
********************************************* */ 

/* *********************************************
INCLUDES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 
#ifndef QUEUE_C
#define QUEUE_C

typedef struct queue_s{
    void* base;
    int** allocBlock_sizes;
    void** allocBlock;
    void* queue_t_link;
} queue_t;

#endif