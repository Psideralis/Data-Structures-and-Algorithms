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

typedef struct table_s{
    
    PSI_RET (*new_table)(table_t);
    PSI_RET (*del_table)(table_t);
} table_t;

#endif