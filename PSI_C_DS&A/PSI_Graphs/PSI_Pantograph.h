/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: PSI_Pantograph.hpp
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

#ifndef PSIPANTOGRAPH_C
#define PSIPANTOGRAPH_C

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

#endif