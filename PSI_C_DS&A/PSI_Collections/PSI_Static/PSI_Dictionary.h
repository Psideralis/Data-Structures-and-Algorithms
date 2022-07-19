/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Dictionary.hpp
Description:
********************************************* */ 

/* *********************************************
INCLUDES:
    PSI_DataStructures
MACROS:
    CSTD
    PSI_DICTIONARY_C
STRUCTS:
    reference_s
    dictionary_s
ENUMS:

TYPES:
    reference_t
    dictionary_t
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

#ifndef PSI_DICTIONARY_C
#define PSI_DICTIONARY_C

typedef struct reference_s{
    unsigned int entry_size;
    char* entry;
    void* reference_t_link;
} reference_t;

typedef struct dictionary_s{
    void* term;
    reference_t* extension;
    void* dictionary_t_link;
} dictionary_t;

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dictionary_t_zeromem_alloc(dictionary_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dictionary_t_init(dictionary_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dictionary_t_null_init(dictionary_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dictionary_t_range_init(dictionary_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dictionary_t_reinit(dictionary_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dictionary_t_dealloc(dictionary_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dictionary_t_set(dictionary_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dictionary_t_get(dictionary_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dictionary_t_copy(dictionary_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dictionary_t_resize(dictionary_t* self){
    return NO_ERROR;
}

#endif