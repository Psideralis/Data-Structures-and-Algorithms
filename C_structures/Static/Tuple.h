/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Tuple.h
Description: A tuple is a grouping of mixed
elements. It is not natively ordered and can
have repeated elements.

********************************************* */ 


/* *********************************************
INCLUDES:
	TUPLE_H
MACROS:

STRUCTS:
    tuple_s
ENUMS:

TYPES:
    tuple_t
FUNCTIONS:
    BASICS
        zeroalloc
        zeroinit
        rangeinit
            int
            double
        init
            int
            double
            set_t
        new
            args_list
            set_array
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

#include "Map.h"

#ifndef TUPLE_H
#define TUPLE_H

typedef struct tuple_s{
    int tuple_size;
    map_t* entry;
    void* tuple_t_link;
}tuple_t;

PSI_RET_t tuple_t_zinit(tuple_t* self){
    return NO_ERROR;
}
PSI_RET_t tuple_t_init(tuple_t* self){
    return NO_ERROR;
}
PSI_RET_t tuple_t_new(tuple_t* self){
    return NO_ERROR;
}
PSI_RET_t tuple_t_del(tuple_t* self){
    return NO_ERROR;
}
PSI_RET_t tuple_t_get(tuple_t* self){
    return NO_ERROR;
}
PSI_RET_t tuple_t_emptyTuple(tuple_t* self){
    return NO_ERROR;
}
PSI_RET_t tuple_t_resizeEmptyTuple(tuple_t* self){
    return NO_ERROR;
}
PSI_RET_t tuple_t_isempty(tuple_t* self){
    return NO_ERROR;
}
PSI_RET_t tuple_t_getSize(tuple_t* self){
    return NO_ERROR;
}
PSI_RET_t tuple_t_setSize(tuple_t* self){
    return NO_ERROR;
}
PSI_RET_t tuple_t_getKey(tuple_t* self){
    return NO_ERROR;
}
PSI_RET_t tuple_t_setKey(tuple_t* self){
    return NO_ERROR;
}
PSI_RET_t tuple_t_addKey(tuple_t* self){
    return NO_ERROR;
}
PSI_RET_t tuple_t_delKey(tuple_t* self){
    return NO_ERROR;
}
PSI_RET_t tuple_t_getValue(tuple_t* self){
    return NO_ERROR;
}
PSI_RET_t tuple_t_setValue(tuple_t* self){
    return NO_ERROR;
}
PSI_RET_t tuple_t_addValue(tuple_t* self){
    return NO_ERROR;
}
PSI_RET_t tuple_t_delValue(tuple_t* self){
    return NO_ERROR;
}
PSI_RET_t tuple_t_exchangeValue(tuple_t* self){
    return NO_ERROR;
}

#endif