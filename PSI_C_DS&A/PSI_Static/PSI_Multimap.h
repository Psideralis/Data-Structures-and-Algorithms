/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Multimap.hpp
Description:
********************************************* */ 

/* *********************************************
INCLUDES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

FUNCTIONS:
    BASICS
        zero_alloc
        null_init
        range_init
            int
            double
        init
            int
            double
            set_t
        new
            args_list
        dealloc
        del
    MISCELANEOUS
        empty
        set
        get
        resizeEmpty
        resizeZero
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

#ifndef MULTIMAP_C
#define MULTIMAP_C

typedef struct multiMap_s{
    unsigned int* key_size;
    void* keys;
    value_t** entries;
    void* multiMap_t_link;
} multiMap_t;

PSI_RET_t multiMap_t_zinit(multiMap_t* self){
    return NO_ERROR;
}
PSI_RET_t multiMap_t_init(multiMap_t* self){
    return NO_ERROR;
}
PSI_RET_t multiMap_t_new(multiMap_t* self){
    return NO_ERROR;
}
PSI_RET_t multiMap_t_del(multiMap_t* self){
    return NO_ERROR;
}
PSI_RET_t multiMap_t_get(multiMap_t* self){
    return NO_ERROR;
}
PSI_RET_t multiMap_t_emptyMultiMap(multiMap_t* self){
    return NO_ERROR;
}
PSI_RET_t multiMap_t_resizeEmptyMultiMap(multiMap_t* self){
    return NO_ERROR;
}
PSI_RET_t multiMap_t_isempty(multiMap_t* self){
    return NO_ERROR;
}
PSI_RET_t multiMap_t_getSize(multiMap_t* self){
    return NO_ERROR;
}
PSI_RET_t multiMap_t_setSize(multiMap_t* self){
    return NO_ERROR;
}
PSI_RET_t multiMap_t_getKey(multiMap_t* self){
    return NO_ERROR;
}
PSI_RET_t multiMap_t_setKey(multiMap_t* self){
    return NO_ERROR;
}
PSI_RET_t multiMap_t_addKey(multiMap_t* self){
    return NO_ERROR;
}
PSI_RET_t multiMap_t_delKey(multiMap_t* self){
    return NO_ERROR;
}
PSI_RET_t multiMap_t_getValue(multiMap_t* self){
    return NO_ERROR;
}
PSI_RET_t multiMap_t_setValue(multiMap_t* self){
    return NO_ERROR;
}
PSI_RET_t multiMap_t_addValue(multiMap_t* self){
    return NO_ERROR;
}
PSI_RET_t multiMap_t_delValue(multiMap_t* self){
    return NO_ERROR;
}
PSI_RET_t multiMap_t_exchangeValue(multiMap_t* self){
    return NO_ERROR;
}

#endif