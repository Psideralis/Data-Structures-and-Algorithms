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
#ifndef ARRAYGRID4D_C
#define ARRAYGRID4D_C

typedef struct cube_s{
    void* entry;
} cube_t;

typedef struct arrayGrid4D_s{
    cube_t**** cube;
} arrayGrid4D_t;

#endif