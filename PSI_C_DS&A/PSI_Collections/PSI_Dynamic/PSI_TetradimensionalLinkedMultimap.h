/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: TetradimensionalLinkedMultimap.h
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:
    PSI_LINKEDMULTIMAP4D_C
STRUCTS:
    linkedMultimap4D_s
ENUMS:

TYPES:
    linkedMultimap4D_t
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

#ifndef PSI_LINKEDMULTIMAP4D_C
#define PSI_LINKEDMULTIMAP4D_C

typedef struct LinkedMultimap4D_s{
    void* item;
} linkedMultimap4D_t;

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedMultimap4D_t_zeromem_alloc(linkedMultimap4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedMultimap4D_t_init(linkedMultimap4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedMultimap4D_t_null_init(linkedMultimap4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedMultimap4D_t_range_init(linkedMultimap4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedMultimap4D_t_reinit(linkedMultimap4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedMultimap4D_t_dealloc(linkedMultimap4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedMultimap4D_t_set(linkedMultimap4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedMultimap4D_t_get(linkedMultimap4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedMultimap4D_t_copy(linkedMultimap4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedMultimap4D_t_resize(linkedMultimap4D_t* self){
    return NO_ERROR;
}

#endif