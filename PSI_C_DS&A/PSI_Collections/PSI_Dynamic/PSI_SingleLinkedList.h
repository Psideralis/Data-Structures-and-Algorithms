/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: SingleLinkedList.hpp
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:
    PSI_SLINKEDLIST_C
STRUCTS:
    sLinkedList_s
ENUMS:

TYPES:
    sLinkedList_t
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

#ifndef PSI_SLINKEDLIST_C
#define PSI_SLINKEDLIST_C

typedef struct sLinkedList_t{
    void* item;
} sLinkedList_t;

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t sLinkedList_t_zeromem_alloc(sLinkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t sLinkedList_t_init(sLinkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t sLinkedList_t_null_init(sLinkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t sLinkedList_t_range_init(sLinkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t sLinkedList_t_reinit(sLinkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t sLinkedList_t_dealloc(sLinkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t sLinkedList_t_set(sLinkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t sLinkedList_t_get(sLinkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t sLinkedList_t_copy(sLinkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t sLinkedList_t_resize(sLinkedList_t* self){
    return NO_ERROR;
}

#endif