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

void tuple_t_zinit(){}
void tuple_t_init(){}
void tuple_t_new(){}
void tuple_t_del(){}
void tuple_t_get(){}
void tuple_t_emptyTuple(){}
void tuple_t_resizeEmptyTuple(){}
void tuple_t_isempty(){}
void tuple_t_getSize(){}
void tuple_t_setSize(){}
void tuple_t_getKey(){}
void tuple_t_setKey(){}
void tuple_t_addKey(){}
void tuple_t_delKey(){}
void tuple_t_getValue(){}
void tuple_t_setValue(){}
void tuple_t_addValue(){}
void tuple_t_delValue(){}
void tuple_t_exchangeValue(){}

#endif