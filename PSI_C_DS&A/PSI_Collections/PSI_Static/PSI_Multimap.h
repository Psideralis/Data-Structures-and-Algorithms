/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Multimap.hpp
Description:
********************************************* */ 

/* *********************************************
INCLUDES:
    PSI_DataStructures
MACROS:
    CSTD
    PSI_MULTIMAP_C
STRUCTS:
    multiMap_s
ENUMS:

TYPES:
    multiMap_t
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

#ifndef PSI_MULTIMAP_C
#define PSI_MULTIMAP_C

typedef struct multiMap_s{
    unsigned int* key_size;
    void* keys;
    value_t** entries;
    void* multiMap_t_link;
} multiMap_t;

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multiMap_t_zeromem_alloc(multiMap_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multiMap_t_init(multiMap_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multiMap_t_null_init(multiMap_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multiMap_t_range_init(multiMap_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multiMap_t_reinit(multiMap_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multiMap_t_dealloc(multiMap_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multiMap_t_set(multiMap_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multiMap_t_get(multiMap_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multiMap_t_copy(multiMap_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t multiMap_t_resize(multiMap_t* self){
    return NO_ERROR;
}

#endif