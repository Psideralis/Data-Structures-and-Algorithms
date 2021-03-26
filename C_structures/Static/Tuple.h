/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Set.h
Description: A tuple is a grouping of mixed
elements. It is not natively ortdered and can
have repeated elements.

********************************************* */ 

/* *********************************************
DEFINES:
	TUPLE_H
MACROS:

STRUCTS:
    tuple_s
ENUMS:

TYPES:
    tuple_t
FUNCTIONS:
    INMUTATIVE:
        SEARCH
        SELECTION
    MUTATIVE:
        SETTER
        ADDITION OR REMOVE
        ECHANGE
        SUBSTITUTION
        CLASSIFICATION
    TRANSMUTATIVE:
        COMBINATORICS
********************************************* */ 

#include "../PsideralisDataStructures.h"
#include "Map.h"

#ifndef TUPLE_H
#define TUPLE_H

typedef struct tuple_s{
    int size = 0;
    map_t* entry;
}tuple_t;

void tuple_t_zinit(){}
void tuple_t_init(){}
void tuple_t_new(){}
void tuple_t_del(){}
void tuple_t_gel(){}
void tuple_t_emptyTuple(){}
void tuple_t_resizeEmptyTuple(){}
void tuple_t_isempty(){}
void tuple_t_getSize(){}
void tuple_t_setSize(){}
void tuple_t_getItem(){}
void tuple_t_setItem(){}
void tuple_t_addItem(){}
void tuple_t_delItem(){}
void tuple_t_exchangeItem(){}

#endif