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

void arrayGrid4D_t_zinit(){}
void arrayGrid4D_t_init(){}
void arrayGrid4D_t_new(){}
void arrayGrid4D_t_del(){}
void arrayGrid4D_t_get(){}
void arrayGrid4D_t_emptyArrayGrid4D(){}
void arrayGrid4D_t_resizeEmptyArrayGrid4D(){}
void arrayGrid4D_t_isempty(){}
void arrayGrid4D_t_getSize(){}
void arrayGrid4D_t_setSize(){}
void arrayGrid4D_t_getKey(){}
void arrayGrid4D_t_setKey(){}
void arrayGrid4D_t_addKey(){}
void arrayGrid4D_t_delKey(){}
void arrayGrid4D_t_getValue(){}
void arrayGrid4D_t_setValue(){}
void arrayGrid4D_t_addValue(){}
void arrayGrid4D_t_delValue(){}
void arrayGrid4D_t_exchangeValue(){}

#endif