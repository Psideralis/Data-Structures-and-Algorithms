/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: ArrayList.hpp
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 
#ifndef MULTIMAP_C
#define MULTIMAP_C

typedef struct value_s{
    void* value;
} value_t;

typedef struct multiMap_s{
    void* key;
    value_t** entries;
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