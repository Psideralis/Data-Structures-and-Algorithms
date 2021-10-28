/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: OrderedList.hpp
Description:
********************************************* */ 

/* *********************************************
INCLUDES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 
#ifndef ORDEREDLIST_C
#define ORDEREDLIST_C

typedef struct orderedList_s{
    unsigned int entry_size;
    map_t entry;
    void* oderedList_t_link;
} oderedList_t;

#endif