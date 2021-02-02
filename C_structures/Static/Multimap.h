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

typedef struct multimap_s{
    
    PSI_RET (*new_multimap)(multimap_t);
    PSI_RET (*del_multimap)(multimap_t);
} multimap_t;

#endif