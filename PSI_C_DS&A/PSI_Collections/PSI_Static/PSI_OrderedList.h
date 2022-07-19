/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: OrderedList.hpp
Description:
********************************************* */ 

/* *********************************************
INCLUDES:
    PSI_DataStructures
MACROS:
    CSTD
    PSI_ORDEREDLIST_C
STRUCTS:
    orderedList_s
ENUMS:

TYPES:  
    orderedList_t
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
#include "PSI_Map.h"

#ifndef CSTD
#define CSTD
    #include <stdlib.h>
    #include <stdio.h>
    #include <stdarg.h>
    #include <string.h>
    #include <cstdint>
    #include <stdint.h>
#endif

#ifndef PSI_ORDEREDLIST_C
#define PSI_ORDEREDLIST_C

/*
Name: orderedList_t	
Description: A orderedList struct.
Properties:
    size: an integer with the size of the orderedList.
    entry: a void pointer to value. No indexing
        included.
    orderedList_t_link: a void pointer for linking 
        porposes.
*/
typedef struct orderedList_s{
    uint64_t orderedList_size;
    map_t* entry;
    void* orderedList_t_link;
}orderedList_t;

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t orderedList_t_zeromem_alloc(orderedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t orderedList_t_init(orderedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t orderedList_t_null_init(orderedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t orderedList_t_range_init(orderedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t orderedList_t_reinit(orderedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t orderedList_t_dealloc(orderedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t orderedList_t_set(orderedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t orderedList_t_get(orderedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t orderedList_t_copy(orderedList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t orderedList_t_resize(orderedList_t* self){
    return NO_ERROR;
}

#endif