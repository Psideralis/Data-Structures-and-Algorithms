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

********************************************* */ 

#include "Map.h"

#ifndef MULTIMAP_C
#define MULTIMAP_C

typedef struct multiMap_s{
    unsigned int* key_size;
    void* keys;
    value_t** entries;
    void* multiMap_t_link;
} multiMap_t;

void multiMap_t_zinit(){}
void multiMap_t_init(){}
void multiMap_t_new(){}
void multiMap_t_del(){}
void multiMap_t_get(){}
void multiMap_t_emptyMultiMap(){}
void multiMap_t_resizeEmptyMultiMap(){}
void multiMap_t_isempty(){}
void multiMap_t_getSize(){}
void multiMap_t_setSize(){}
void multiMap_t_getKey(){}
void multiMap_t_setKey(){}
void multiMap_t_addKey(){}
void multiMap_t_delKey(){}
void multiMap_t_getValue(){}
void multiMap_t_setValue(){}
void multiMap_t_addValue(){}
void multiMap_t_delValue(){}
void multiMap_t_exchangeValue(){}

#endif