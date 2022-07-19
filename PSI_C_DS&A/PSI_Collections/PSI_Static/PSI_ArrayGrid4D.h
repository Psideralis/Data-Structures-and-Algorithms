/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: ArrayGrid4D.hpp
Description:
********************************************* */ 

/* *********************************************
INCLUDES:
    PSI_DataStructures
    ArrayGrid4D
MACROS:
    CSTD
    ARRAYGRID4D_C
STRUCTS:
    cube4D_s
    arrayGrid4D_s
ENUMS:

TYPES:
    cube4D_t
    arrayGrid4D_t
FUNCTIONS:
    BASICS
        zeromem_alloc
        init
        null_init
        range_init
        reinit
        dealloc
    MISCELANEOUS
        empty
        set
        get
        copy
        resize
    ALGORITHMS
        INMUTATIVE:
            search
            selection
        MUTATIVE:
            setter
            addition or remove
            exchange
            substitution
            classification
        TRANSMUTATIVE:
            combinatorics
********************************************* */ 

#include "PSI_DataStructures.h"
#include "ArrayGrid4D.h"

#ifndef CSTD
#define CSTD
    #include <stdlib.h>
    #include <stdio.h>
    #include <stdarg.h>
    #include <string.h>
    #include <cstdint>
    #include <stdint.h>
#endif

#ifndef ARRAYGRID4D_C
#define ARRAYGRID4D_C

typedef struct cube4D_s{
    uint64_t cube_size;
    uint64_t**** entry;
    void* cube_t_link;
} cube4D_t;

typedef struct arrayGrid4D_s{
    uint64_t w_size;
    uint64_t x_size;
    uint64_t y_size;
    uint64_t z_size;
    cube4D_t* cube;
    void* arrayGrid4D_t_link;
} arrayGrid4D_t;

PSI_RET_t arrayGrid4D_t_zinit(arrayGrid4D_s* self){
    self->w_size = 0;
    self->x_size = 0;
    self->y_size = 0;
    self->z_size = 0;
    self->cube = new cube3D_t();
    self->cube->entry =  new uint64_t**[self->w_size];
    for(int i = 0; i < self->w_size ; i++){
        self->cube->entry[i] =  new uint64_t*[self->x_size];
        for (int j = 0; j < self->x_size; j++)
        {
            self->cube->entry[i][j] = new uint64_t[self->y_size];
            for (int k = 0; k < self->y_size; k++)
            {
                for (int l = 0; l < self->z_size; l++)
                {  
                    self->cube->entry[i][j][k][l] = 0;
                }
            }
        }
    }
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayGrid4D_t_zeromem_alloc(arrayGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayGrid4D_t_init(arrayGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayGrid4D_t_null_init(arrayGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayGrid4D_t_range_init(arrayGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayGrid4D_t_reinit(arrayGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayGrid4D_t_dealloc(arrayGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayGrid4D_t_set(arrayGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayGrid4D_t_get(arrayGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayGrid4D_t_copy(arrayGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayGrid4D_t_resize(arrayGrid4D_t* self){
    return NO_ERROR;
}
#endif