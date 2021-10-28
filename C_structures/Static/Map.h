/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Map.hpp
Description:
********************************************* */ 

/* *********************************************
INCLUDES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 
#ifndef MAP_C
#define MAP_C

typedef struct value_s{
    unsigned int value_size;
    void* value;
    void* value_t_link;
} value_t;
typedef struct map_s{
    unsigned int* key;
    value_t* value;
    void* map_t_link;
} map_t;

#endif