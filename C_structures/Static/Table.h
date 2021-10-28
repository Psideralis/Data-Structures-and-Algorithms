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

#endif