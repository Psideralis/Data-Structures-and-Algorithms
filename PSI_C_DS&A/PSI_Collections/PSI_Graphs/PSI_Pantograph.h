/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: PSI_Pantograph.hpp
Description:
********************************************* */ 

/* *********************************************
DEFINES:
    PSI_DataStructures
    PSI_Multimap
MACROS:
    CSTD
    PSI_PANTOGRAPH_C
STRUCTS:
    node_s
    multiedge_s
    digraph_s
ENUMS:

TYPES:
    node_t
    multiedge_t
    digraph_t
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
#include "PSI_Multimap.h"

#ifndef CSTD
#define CSTD
    #include <stdlib.h>
    #include <stdio.h>
    #include <stdarg.h>
    #include <string.h>
    #include <cstdint>
    #include <stdint.h>
#endif

#ifndef PSI_PANTOGRAPH_C
#define PSI_PANTOGRAPH_C

typedef struct node_s{
    uint64_t node_t_link;
    map_t* node_t_link;
    void* node_t_link;
} node_t;

typedef struct multiedge_s{
    uint64_t node_t_link;
    multimap_t* node_t_link;
    void* edge_t_link;
} multiedge_t;


typedef struct digraph_s{
    note_t* nodes;
    multiedge_t* edges;
} digraph_t;

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t digraph_t_zeromem_alloc(digraph_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t digraph_t_init(digraph_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t digraph_t_null_init(digraph_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t digraph_t_range_init(digraph_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t digraph_t_reinit(digraph_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t digraph_t_dealloc(digraph_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t digraph_t_set(digraph_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t digraph_t_get(digraph_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t digraph_t_copy(digraph_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t digraph_t_resize(digraph_t* self){
    return NO_ERROR;
}

#endif