/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Map.hpp
Description:
********************************************* */ 

/* *********************************************
INCLUDES:
    PSI_DataStructures
MACROS: 
    CSTD
    PSI_MAP_C
STRUCTS:
    value_s
    map_s
ENUMS:

TYPES:
    value_t
    map_t
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

#ifndef PSI_MAP_C
#define PSI_MAP_C

typedef struct value_s{
    uint64_t value_size;
    void* value;
    void* value_t_link;
} value_t;

typedef struct map_s{
    uint64_t* key;
    value_t* value;
    void* map_t_link;
} map_t;

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t map_t_zeromem_alloc(map_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t map_t_init(map_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t map_t_null_init(map_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t map_t_range_init(map_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t map_t_reinit(map_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t map_t_dealloc(map_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t map_t_set(map_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t map_t_get(map_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t map_t_copy(map_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t map_t_resize(map_t* self){
    return NO_ERROR;
}

#endif