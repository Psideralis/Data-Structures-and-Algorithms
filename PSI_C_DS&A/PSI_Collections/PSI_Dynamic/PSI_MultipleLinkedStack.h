/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: MultipleLinkedStack.h
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:
    PSI_MULTIPLELINKSTACK_C
STRUCTS:
    multipleLinkedStack_s
ENUMS:

TYPES:
    multipleLinkedStack_t
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

#ifndef PSI_MULTIPLELINKSTACK_C
#define PSI_MULTIPLELINKSTACK_C

typedef struct multipleLinkedStack_s{
    void* item;
} multipleLinkedStack_t;

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedStack_t_zeromem_alloc(multipleLinkedStack_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedStack_t_init(multipleLinkedStack_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedStack_t_null_init(multipleLinkedStack_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedStack_t_range_init(multipleLinkedStack_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedStack_t_reinit(multipleLinkedStack_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedStack_t_dealloc(multipleLinkedStack_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedStack_t_set(multipleLinkedStack_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedStack_t_get(multipleLinkedStack_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedStack_t_copy(multipleLinkedStack_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedStack_t_resize(multipleLinkedStack_t* self){
    return NO_ERROR;
}

#endif