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

typedef struct node_s{
    uint64_t node_t_link;
    map_t* node_t_link;
    void* node_t_link;
} node_t;

typedef struct edge_s{
    uint64_t node_t_link;
    map_t* node_t_link;
    void* edge_t_link;
} edge_t;


typedef struct graph_s{
    note_t* nodes;
    edge_t* edges;
} graph_t;

#endif