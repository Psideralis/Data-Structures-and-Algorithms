/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Map.hpp
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

#ifndef MAP_C
#define MAP_C

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

PSI_RET_t map_t_zinit(map_t* self){
    return NO_ERROR;
}
PSI_RET_t map_t_init(map_t* self){
    return NO_ERROR;
}
PSI_RET_t map_t_new(map_t* self){
    return NO_ERROR;
}
PSI_RET_t map_t_del(map_t* self){
    return NO_ERROR;
}
PSI_RET_t map_t_get(map_t* self){
    return NO_ERROR;
}
PSI_RET_t map_t_emptyMap(map_t* self){
    return NO_ERROR;
}
PSI_RET_t map_t_resizeEmptyMap(map_t* self){
    return NO_ERROR;
}
PSI_RET_t map_t_isempty(map_t* self){
    return NO_ERROR;
}
PSI_RET_t map_t_getSize(map_t* self){
    return NO_ERROR;
}
PSI_RET_t map_t_setSize(map_t* self){
    return NO_ERROR;
}
PSI_RET_t map_t_getKey(map_t* self){
    return NO_ERROR;
}
PSI_RET_t map_t_setKey(map_t* self){
    return NO_ERROR;
}
PSI_RET_t map_t_addKey(map_t* self){
    return NO_ERROR;
}
PSI_RET_t map_t_delKey(map_t* self){
    return NO_ERROR;
}
PSI_RET_t map_t_getValue(map_t* self){
    return NO_ERROR;
}
PSI_RET_t map_t_setValue(map_t* self){
    return NO_ERROR;
}
PSI_RET_t map_t_addValue(map_t* self){
    return NO_ERROR;
}
PSI_RET_t map_t_delValue(map_t* self){
    return NO_ERROR;
}
PSI_RET_t map_t_exchangeValue(map_t* self){
    return NO_ERROR;
}

#endif