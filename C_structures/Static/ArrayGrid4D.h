/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: ArrayGrid4D.hpp
Description:
********************************************* */ 

/* *********************************************
INCLUDES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 
#include "ArrayGrid3D.h"

#ifndef ARRAYGRID4D_C
#define ARRAYGRID4D_C

typedef struct arrayGrid4D_s{
    unsigned int w_size;
    unsigned int x_size;
    unsigned int y_size;
    unsigned int z_size;
    cube_t**** cube;
    void* arrayGrid4D_t_link;
} arrayGrid4D_t;

#endif