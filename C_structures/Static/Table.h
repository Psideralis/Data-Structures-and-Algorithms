/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Table.hpp
Description:
********************************************* */ 

/* *********************************************
INCLUDES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 
#ifndef TABLE_C
#define TABLE_C

typedef struct cell_s{
    unsigned int value_size;
    void* value;
    void* cell_t_link;   
} cell_t;

typedef struct table_s{
    int row_size;
    int columns_size;
    cell_t** cell;   
    void* table_t_link;
} table_t;

void table_t_zinit(){}
void table_t_init(){}
void table_t_new(){}
void table_t_del(){}
void table_t_get(){}
void table_t_emptyTable(){}
void table_t_resizeEmptyTable(){}
void table_t_isempty(){}
void table_t_getSize(){}
void table_t_setSize(){}
void table_t_getKey(){}
void table_t_setKey(){}
void table_t_addKey(){}
void table_t_delKey(){}
void table_t_getValue(){}
void table_t_setValue(){}
void table_t_addValue(){}
void table_t_delValue(){}
void table_t_exchangeValue(){}

#endif