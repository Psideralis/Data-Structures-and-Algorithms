/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: MultipleLinkedTetradimensionalLinked
    List.h
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:
    PSI_MULTIPLELINKED4DLINKEDLIST_C
STRUCTS:
    multipleLinkedList4D_s
ENUMS:

TYPES:
    multipleLinkedList4D_t
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

#ifndef PSI_MULTIPLELINKED4DLINKEDLIST_C
#define PSI_MULTIPLELINKED4DLINKEDLIST_C

typedef struct multipleLinkedList4D_s{
    void* item;
} multipleLinkedList4D_t;

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedList4D_t_zeromem_alloc(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedList4D_t_init(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedList4D_t_null_init(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedList4D_t_range_init(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedList4D_t_reinit(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedList4D_t_dealloc(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedList4D_t_set(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedList4D_t_get(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedList4D_t_copy(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedList4D_t_resize(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
#endif