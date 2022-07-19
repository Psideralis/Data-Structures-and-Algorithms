/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: TetradimensionalLinkedGrid.h
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:
    PSI_LINKEDGRID4D_C
STRUCTS:
    linkedGrid4D_s
ENUMS:

TYPES:
    linkedGrid4D_t
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

#ifndef PSI_LINKEDGRID4D_C
#define PSI_LINKEDGRID4D_C

typedef struct LinkedGrid4D_s{
    void* item;
} linkedGrid4D_t;

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid4D_t_zeromem_alloc(linkedGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid4D_t_init(linkedGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid4D_t_null_init(linkedGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid4D_t_range_init(linkedGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid4D_t_reinit(linkedGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid4D_t_dealloc(linkedGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid4D_t_set(linkedGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid4D_t_get(linkedGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid4D_t_copy(linkedGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedGrid4D_t_resize(linkedGrid4D_t* self){
    return NO_ERROR;
}

#endif