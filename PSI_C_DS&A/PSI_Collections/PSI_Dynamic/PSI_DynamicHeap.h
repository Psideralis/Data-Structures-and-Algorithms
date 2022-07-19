/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: DynamicHeap.h
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:
    PSI_DYNAMICHEAP_C
STRUCTS:
    dynamicHeap_s
ENUMS:

TYPES:
    dynamicHeap_t
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

#ifndef PSI_DYNAMICHEAP_C
#define PSI_DYNAMICHEAP_C

typedef struct dynamicHeap_s{
    void* item;
} dynamicHeap_t;

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dynamicHeap_t_zeromem_alloc(dynamicHeap_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dynamicHeap_t_init(dynamicHeap_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dynamicHeap_t_null_init(dynamicHeap_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dynamicHeap_t_range_init(dynamicHeap_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dynamicHeap_t_reinit(dynamicHeap_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dynamicHeap_t_dealloc(dynamicHeap_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dynamicHeap_t_set(dynamicHeap_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dynamicHeap_t_get(dynamicHeap_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dynamicHeap_t_copy(dynamicHeap_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dynamicHeap_t_resize(dynamicHeap_t* self){
    return NO_ERROR;
}
#endif