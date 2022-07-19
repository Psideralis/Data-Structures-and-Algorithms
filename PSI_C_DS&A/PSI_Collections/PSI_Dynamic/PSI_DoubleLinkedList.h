/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: DoubleLinkedList.hpp
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:
    PSI_DLINKEDLIST_C
STRUCTS:
    dLinkedList_s
ENUMS:

TYPES:
    dLinkedList_t
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

#ifndef PSI_DLINKEDLIST_C
#define PSI_DLINKEDLIST_C

typedef struct dLinkedList_t{
    void* item;
} dLinkedList_t;


/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dLinkedList_t_zeromem_alloc(dLinkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dLinkedList_t_init(dLinkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dLinkedList_t_null_init(dLinkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dLinkedList_t_range_init(dLinkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dLinkedList_t_reinit(dLinkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dLinkedList_t_dealloc(dLinkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dLinkedList_t_set(dLinkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dLinkedList_t_get(dLinkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dLinkedList_t_copy(dLinkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dLinkedList_t_resize(dLinkedList_t* self){
    return NO_ERROR;
}
#endif