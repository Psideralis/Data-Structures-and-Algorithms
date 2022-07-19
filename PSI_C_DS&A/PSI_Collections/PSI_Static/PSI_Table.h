/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Table.hpp
Description:
********************************************* */ 

/* *********************************************
INCLUDES:
    PSI_DataStructures
MACROS:
    CSTD
    PSI_TABLE_C
STRUCTS:
    cell_s
    table_s
ENUMS:

TYPES:
    cell_t
    table_t
FUNCTIONS:
    BASICS
        zeromem_alloc
        init
        null_init
        range_init
        reinit
        dealloc
    MISCELANEOUS
        empty
        set
        get
        copy
        resize
    ALGORITHMS
        INMUTATIVE:
            search
            selection
        MUTATIVE:
            setter
            addition or remove
            exchange
            substitution
            classification
        TRANSMUTATIVE:
            combinatorics
********************************************* */ 
#include "PSI_DataStructures.h"


#ifndef CSTD
#define CSTD
    #include <stdlib.h>
    #include <stdio.h>
    #include <stdarg.h>
    #include <string.h>
    #include <cstdint>
    #include <stdint.h>
#endif

#ifndef PSI_TABLE_C
#define PSI_TABLE_C

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

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t table_t_zeromem_alloc(table_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t table_t_init(table_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t table_t_null_init(table_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t table_t_range_init(table_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t table_t_reinit(table_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t table_t_dealloc(table_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t table_t_set(table_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t table_t_get(table_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t table_t_copy(table_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t table_t_resize(table_t* self){
    return NO_ERROR;
}

#endif