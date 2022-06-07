/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: OrderedList.hpp
Description:
********************************************* */ 

/* *********************************************
INCLUDES:

MACROS:
    PSIORDEREDLIST_C
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

#ifndef PSIORDEREDLIST_C
#define PSIORDEREDLIST_C

typedef struct orderedList_s{
    unsigned int entry_size;
    map_t entry;
    void* oderedList_t_link;
} oderedList_t;

PSI_RET_t oderedList_t_zinit(oderedList_t* self){
    return NO_ERROR;
}
PSI_RET_t oderedList_t_init(oderedList_t* self){
    return NO_ERROR;
}
PSI_RET_t oderedList_t_new(oderedList_t* self){
    return NO_ERROR;
}
PSI_RET_t oderedList_t_del(oderedList_t* self){
    return NO_ERROR;
}
PSI_RET_t oderedList_t_get(oderedList_t* self){
    return NO_ERROR;
}
PSI_RET_t oderedList_t_emptyMultiMap(oderedList_t* self){
    return NO_ERROR;
}
PSI_RET_t oderedList_t_resizeEmptyMultiMap(oderedList_t* self){
    return NO_ERROR;
}
PSI_RET_t oderedList_t_isempty(oderedList_t* self){
    return NO_ERROR;
}
PSI_RET_t oderedList_t_getSize(oderedList_t* self){
    return NO_ERROR;
}
PSI_RET_t oderedList_t_setSize(oderedList_t* self){
    return NO_ERROR;
}
PSI_RET_t oderedList_t_getKey(oderedList_t* self){
    return NO_ERROR;
}
PSI_RET_t oderedList_t_setKey(oderedList_t* self){
    return NO_ERROR;
}
PSI_RET_t oderedList_t_addKey(oderedList_t* self){
    return NO_ERROR;
}
PSI_RET_t oderedList_t_delKey(oderedList_t* self){
    return NO_ERROR;
}
PSI_RET_t oderedList_t_getValue(oderedList_t* self){
    return NO_ERROR;
}
PSI_RET_t oderedList_t_setValue(oderedList_t* self){
    return NO_ERROR;
}
PSI_RET_t oderedList_t_addValue(oderedList_t* self){
    return NO_ERROR;
}
PSI_RET_t oderedList_t_delValue(oderedList_t* self){
    return NO_ERROR;
}
PSI_RET_t oderedList_t_exchangeValue(oderedList_t* self){
    return NO_ERROR;
}

#endif