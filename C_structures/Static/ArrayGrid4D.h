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

FUNCTIONS:
    BASICS
        zero_alloc
        null_init
        range_init
            int
            double
        init
            int
            double
            set_t
        new
            args_list
        dealloc
        del
    MISCELANEOUS
        empty
        set
        get
        resizeEmpty
        resizeZero
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
#include "ArrayGrid3D.h"

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
PSI_RET_t arrayGrid4D_t_init(arrayGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t arrayGrid4D_t_new(arrayGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t arrayGrid4D_t_del(arrayGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t arrayGrid4D_t_get(arrayGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t arrayGrid4D_t_emptyArrayGrid4D(arrayGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t arrayGrid4D_t_resizeEmptyArrayGrid4D(arrayGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t arrayGrid4D_t_isempty(arrayGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t arrayGrid4D_t_getSize(arrayGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t arrayGrid4D_t_setSize(arrayGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t arrayGrid4D_t_getKey(arrayGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t arrayGrid4D_t_setKey(arrayGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t arrayGrid4D_t_addKey(arrayGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t arrayGrid4D_t_delKey(arrayGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t arrayGrid4D_t_getValue(arrayGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t arrayGrid4D_t_setValue(arrayGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t arrayGrid4D_t_addValue(arrayGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t arrayGrid4D_t_delValue(arrayGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t arrayGrid4D_t_exchangeValue(arrayGrid4D_t* self){
    return NO_ERROR;
}

#endif