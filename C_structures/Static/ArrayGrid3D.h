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

void arrayGrid3D_t_zinit(){}
void arrayGrid3D_t_init(){}
void arrayGrid3D_t_new(){}
void arrayGrid3D_t_del(){}
void arrayGrid3D_t_get(){}
void arrayGrid3D_t_emptyArrayGrid3D(){}
void arrayGrid3D_t_resizeEmptyArrayGrid3D(){}
void arrayGrid3D_t_isempty(){}
void arrayGrid3D_t_getSize(){}
void arrayGrid3D_t_setSize(){}
void arrayGrid3D_t_getKey(){}
void arrayGrid3D_t_setKey(){}
void arrayGrid3D_t_addKey(){}
void arrayGrid3D_t_delKey(){}
void arrayGrid3D_t_getValue(){}
void arrayGrid3D_t_setValue(){}
void arrayGrid3D_t_addValue(){}
void arrayGrid3D_t_delValue(){}
void arrayGrid3D_t_exchangeValue(){}

#endif