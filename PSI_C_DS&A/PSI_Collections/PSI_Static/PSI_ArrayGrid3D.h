/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: ArrayGrid3D.hpp
Description:
********************************************* */ 

/* *********************************************
INCLUDES:
    PSI_DataStructures
MACROS:
    CSTD
    ARRAYGRID3D_C
    MAX_SIZE
STRUCTS:
    cube3D_s
    arrayGrid3D_s
ENUMS:

TYPES:
    cube3D_t
    arrayGrid3D_t
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

#ifndef CSTD
#define CSTD
    #include <stdlib.h>
    #include <stdio.h>
    #include <stdarg.h>
    #include <string.h>
    #include <cstdint>
    #include <stdint.h>
#endif

#ifndef ARRAYGRID3D_C
#define ARRAYGRID3D_C

#define MAX_SIZE 1000

typedef struct cube3D_s{
    uint64_t cube_size;
    uint64_t*** entry;
    void* cube_t_link;
} cube3D_t;


typedef struct arrayGrid3D_s{
    uint64_t x_size;
    uint64_t y_size;
    uint64_t z_size;
    cube3D_t* cube;
    void* arrayGrid3D_t_link;
} arrayGrid3D_t;

PSI_RET_t arrayGrid3D_t_zinit(arrayGrid3D_t* self){
            self->x_size = 0;
            self->y_size = 0;
            self->z_size = 0;
            self->cube = new cube3D_t();
            self->cube->entry =  new uint64_t**[self->x_size];
            for(int i = 0; i < self->y_size ; i++){
                self->cube->entry[i] =  new uint64_t*[self->y_size];
                for (int j = 0; j < self->z_size; j++)
                {
                    self->cube->entry[i][j] = new uint64_t[self->z_size];
                    for (int k = 0; k < self->z_size; k++)
                    {
                        self->cube->entry[i][j][k] = 0;
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
PSI_RET_t arrayGrid3D_t_zeromem_alloc(arrayGrid3D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayGrid3D_t_init(arrayGrid3D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayGrid3D_t_null_init(arrayGrid3D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayGrid3D_t_range_init(arrayGrid3D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayGrid3D_t_reinit(arrayGrid3D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayGrid3D_t_dealloc(arrayGrid3D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayGrid3D_t_set(arrayGrid3D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayGrid3D_t_get(arrayGrid3D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayGrid3D_t_copy(arrayGrid3D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayGrid3D_t_resize(arrayGrid3D_t* self){
    return NO_ERROR;
}

#endif