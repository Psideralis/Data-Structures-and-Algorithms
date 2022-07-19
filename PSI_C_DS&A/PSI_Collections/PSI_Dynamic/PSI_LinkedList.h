PSI_/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: LinkedList.hpp
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS: 
    PSI_LINKEDLIST_C
STRUCTS:
    linkedList_s
ENUMS:

TYPES:
    linkedList_t
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

#ifndef PSI_LINKEDLIST_C
#define PSI_LINKEDLIST_C

typedef struct linkedList_s{
    void* item;
} linkedList_t;


/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedList_t_zeromem_alloc(linkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedList_t_init(linkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedList_t_null_init(linkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedList_t_range_init(linkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedList_t_reinit(linkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedList_t_dealloc(linkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedList_t_set(linkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedList_t_get(linkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedList_t_copy(linkedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t linkedList_t_resize(linkedList_t* self){
    return NO_ERROR;
}
#endif