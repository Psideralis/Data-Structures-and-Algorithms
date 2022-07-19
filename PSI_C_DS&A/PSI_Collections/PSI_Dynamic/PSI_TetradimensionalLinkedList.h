/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: TetradimensionalLinkedList.hpp
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:
    PSI_LINKEDLIST4D_C
STRUCTS:
    linkedList4D_s
ENUMS:

TYPES:
    linkedList4D_t
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

#ifndef PSI_LINKEDLIST4D_C
#define PSI_LINKEDLIST4D_C

typedef struct LinkedList4D_s{
    void* item;
} linkedList4D_t;

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedList4D_t_zeromem_alloc(linkedList4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedList4D_t_init(linkedList4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedList4D_t_null_init(linkedList4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedList4D_t_range_init(linkedList4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedList4D_t_reinit(linkedList4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedList4D_t_dealloc(linkedList4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedList4D_t_set(linkedList4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedList4D_t_get(linkedList4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedList4D_t_copy(linkedList4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedList4D_t_resize(linkedList4D_t* self){
    return NO_ERROR;
}

#endif