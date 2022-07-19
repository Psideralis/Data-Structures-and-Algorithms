/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: PSI_Graph.hpp
Description:
********************************************* */ 

/* *********************************************
DEFINES:
    PSI_DataStructures
    PSI_Map
MACROS: 
    CSTD
    PSI_GRAPH_C
STRUCTS:
    node_s
    edge_s
    graph_s
ENUMS:

TYPES:
    node_t
    edge_t
    graph_t
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
#include "PSI_Map.h"

#ifndef CSTD
#define CSTD
    #include <stdlib.h>
    #include <stdio.h>
    #include <stdarg.h>
    #include <string.h>
    #include <cstdint>
    #include <stdint.h>
#endif

#ifndef PSI_GRAPH_C
#define PSI_GRAPH_C

/*
Name: node_t	
Description: A node struct.
Properties:
    node_t_size: an integer with the size of the node_t.
    node_t_entry: a void pointer to value. No indexing
        included.
    node_t_link: a void pointer for linking 
        porposes.
*/
typedef struct node_s{
    uint64_t node_t_size;
    void* node_t_entry;
    void* node_t_link;
} node_t;

/*
Name: edge_t	
Description: A edge struct.
Properties:
    size: an integer with the size of the arrayList.
    entry: a void pointer to value. No indexing
        included.
    arrayList_t_link: a void pointer for linking 
        porposes.
*/
typedef struct edge_s{
    uint64_t node_t_link;
    map_t node_t_link;
    void* edge_t_link;
} edge_t;

/*
Name: graph_t	
Description: A graph struct.
Properties:
    size: an integer with the size of the arrayList.
    entry: a void pointer to value. No indexing
        included.
    arrayList_t_link: a void pointer for linking 
        porposes.
*/
typedef struct graph_s{
    map_t graph_t_entry;
} graph_t;

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t graph_t_zeromem_alloc(graph_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t graph_t_init(graph_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t graph_t_null_init(graph_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t graph_t_range_init(graph_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t graph_t_reinit(graph_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t graph_t_dealloc(graph_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t graph_t_set(graph_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t graph_t_get(graph_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t graph_t_copy(graph_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t graph_t_resize(graph_t* self){
    return NO_ERROR;
}

#endif

int main(){
    graph_t mygraph;
    return 0;
}