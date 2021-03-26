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
#ifndef ARRAYGRID3D_C
#define ARRAYGRID3D_C

typedef struct cube_s{
    void* entry;
} cube_t;

typedef struct arrayGrid3D_s{
    cube_t*** cube;
} arrayGrid3D_t;

#endif