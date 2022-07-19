/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: MultipleLinkedQueue.h
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:
    PSI_MULTIPLELINKQUEUE_C
STRUCTS:
    multipleLinkedQueue_s
ENUMS:

TYPES:
    multipleLinkedQueue_t
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

#ifndef PSI_MULTIPLELINKQUEUE_C
#define PSI_MULTIPLELINKQUEUE_C

typedef struct multipleLinkedQueue_s{
    void* item;
} multipleLinkedQueue_t;

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedQueue_t_zeromem_alloc(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedQueue_t_init(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedQueue_t_null_init(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedQueue_t_range_init(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedQueue_t_reinit(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedQueue_t_dealloc(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedQueue_t_set(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedQueue_t_get(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedQueue_t_copy(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedQueue_t_resize(multipleLinkedQueue_t* self){
    return NO_ERROR;
}

#endif