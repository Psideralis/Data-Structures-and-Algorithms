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
#ifndef ARRAYGRID5D_C
#define ARRAYGRID5D_C

typedef struct cube_s{
    void* entry;
} cube_t;

typedef struct arrayGrid5D_s{
    cube_t**** cube;
} arrayGrid5D_t;

#endif