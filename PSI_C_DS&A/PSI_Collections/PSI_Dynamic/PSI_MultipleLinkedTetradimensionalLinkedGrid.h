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
    PSI_MULTIPLELINKED4DLINKEDGRID_C
STRUCTS:

ENUMS:

TYPES:

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

#ifndef PSI_MULTIPLELINKED4DLINKEDGRID_C
#define PSI_MULTIPLELINKED4DLINKEDGRID_C

typedef struct multipleLinkedGrid4D_s{
    void* item;
} multipleLinkedGrid4D_t;

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedGrid4D_t_zeromem_alloc(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedGrid4D_t_init(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedGrid4D_t_null_init(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedGrid4D_t_range_init(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedGrid4D_t_reinit(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedGrid4D_t_dealloc(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedGrid4D_t_set(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedGrid4D_t_get(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedGrid4D_t_copy(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multipleLinkedGrid4D_t_resize(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
#endif