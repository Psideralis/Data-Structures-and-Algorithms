/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: BidimensionalLinkedGrid.h
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:
    PSI_BLINKEDGRID_H
STRUCTS:
    element_s
    linkedGrid2D_s
ENUMS:

TYPES:
    element_t
    linkedGrid2D_t
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

#ifndef PSI_BLINKEDGRID_H
#define PSI_BLINKEDGRID_H

typedef struct element_s{
    void* item;
} element_t;

typedef struct linkedGrid2D_s{
    void* item;
}linkedGrid2D_t;


/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid2D_t_zeromem_alloc(linkedGrid2D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid2D_t_init(linkedGrid2D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid2D_t_null_init(linkedGrid2D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid2D_t_range_init(linkedGrid2D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid2D_t_reinit(linkedGrid2D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid2D_t_dealloc(linkedGrid2D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid2D_t_set(linkedGrid2D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid2D_t_get(linkedGrid2D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid2D_t_copy(linkedGrid2D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid2D_t_resize(linkedGrid2D_t* self){
    return NO_ERROR;
}
#endif