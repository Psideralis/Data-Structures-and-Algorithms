/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: ArrayGrid3D.hpp
Description:
********************************************* */ 

/* *********************************************
INCLUDES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 
#ifndef ARRAYGRID3D_C
#define ARRAYGRID3D_C

#define MAX_SIZE 1000

typedef struct cube_s{
    unsigned int entry_size;
    void* entry;
    void* cube_t_link;
} cube_t;

typedef struct arrayGrid3D_s{
    unsigned int x_size;
    unsigned int y_size;
    unsigned int z_size;
    cube_t*** cube;
    void* arrayGrid3D_t_link;
} arrayGrid3D_t;

#endif