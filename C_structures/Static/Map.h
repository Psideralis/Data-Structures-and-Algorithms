/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Map.hpp
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 
#ifndef MAP_C
#define MAP_C

typedef struct map_s{
    int* key;
    void** value;
} map_t;

void map_t_zinit(){}
void map_t_init(){}
void map_t_new(){}
void map_t_del(){}
void map_t_get(){}
void map_t_emptyMap(){}
void map_t_resizeEmptyMap(){}
void map_t_isempty(){}
void map_t_getSize(){}
void map_t_setSize(){}
void map_t_getKey(){}
void map_t_setKey(){}
void map_t_addKey(){}
void map_t_delKey(){}
void map_t_getValue(){}
void map_t_setValue(){}
void map_t_addValue(){}
void map_t_delValue(){}
void map_t_exchangeValue(){}


#endif