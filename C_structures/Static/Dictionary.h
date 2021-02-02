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

typedef struct dictionary_s{
    
    PSI_RET (*new_dictionary)(dictionary_t);
    PSI_RET (*del_dictionary)(dictionary_t);
} dictionary_t;

#endif