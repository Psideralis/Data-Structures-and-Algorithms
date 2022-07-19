/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: TridimensionalLinkedGrid.h
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:
    PSI_LINKEDGRID3D_H
STRUCTS:
    element_s
    linkedGrid3D_s
ENUMS:

TYPES:
    element_t
    linkedGrid3D_t
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

#ifndef PSI_LINKEDGRID3D_H
#define PSI_LINKEDGRID3D_H

typedef struct element_s{
    void* item;
} element_t;

typedef struct linkekGrid3D_s{
    void* item;
}linkedGrid3D_t;

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid3D_t_zeromem_alloc(linkedGrid3D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid3D_t_init(linkedGrid3D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid3D_t_null_init(linkedGrid3D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid3D_t_range_init(linkedGrid3D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid3D_t_reinit(linkedGrid3D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid3D_t_dealloc(linkedGrid3D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid3D_t_set(linkedGrid3D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid3D_t_get(linkedGrid3D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid3D_t_copy(linkedGrid3D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid3D_t_resize(linkedGrid3D_t* self){
    return NO_ERROR;
}

#endif