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
#ifndef DICTIONARY_C
#define DICTIONARY_C


typedef struct value_s{
    void* value;
} value_t;

typedef struct dictionary_s{
    int* key;
    value_t** entries;
} dictionary_t;

void dictionary_t_zinit(){}
void dictionary_t_init(){}
void dictionary_t_new(){}
void dictionary_t_del(){}
void dictionary_t_get(){}
void dictionary_t_emptyDictionary(){}
void dictionary_t_resizeEmptyDictionary(){}
void dictionary_t_isempty(){}
void dictionary_t_getSize(){}
void dictionary_t_setSize(){}
void dictionary_t_getKey(){}
void dictionary_t_setKey(){}
void dictionary_t_addKey(){}
void dictionary_t_delKey(){}
void dictionary_t_getValue(){}
void dictionary_t_setValue(){}
void dictionary_t_addValue(){}
void dictionary_t_delValue(){}
void dictionary_t_exchangeValue(){}

#endif