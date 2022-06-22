/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: PSI_Graph.hpp
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

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

#ifndef PSIGRAPH_C
#define PSIGRAPH_C

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

#endif

int main(){
    graph_t mygraph;
    return 0;
}