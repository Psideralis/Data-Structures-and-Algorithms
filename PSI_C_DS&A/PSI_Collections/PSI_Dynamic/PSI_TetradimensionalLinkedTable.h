/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: TetradimensionalLinkedTable.h
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:
    PSI_LINKEDTABLE4D_C
STRUCTS:
    linkedTabled4D_
ENUMS:

TYPES:
    linkedTabled4D_t
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

#ifndef PSI_LINKEDTABLE4D_C
#define PSI_LINKEDTABLE4D_C

typedef struct LinkedTabled4D_s{
    void* item;
} linkedTabled4D_t;

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