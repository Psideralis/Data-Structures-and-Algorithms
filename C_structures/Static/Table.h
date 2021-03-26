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
#ifndef TABLE_C
#define TABLE_C

typedef struct cell_s{
    void* value;    
} cell_t;

typedef struct table_s{
    cell_t* cell[];    
} table_t;

#endif