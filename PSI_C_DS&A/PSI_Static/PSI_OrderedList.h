/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: OrderedList.hpp
Description:
********************************************* */ 

/* *********************************************
INCLUDES:

MACROS:
    PSIORDEREDLIST_C
STRUCTS:

ENUMS:

TYPES:

FUNCTIONS:
    BASICS
        zero_alloc
        null_init
        range_init
            int
            double
        init
            int
            double
            set_t
        new
            args_list
        dealloc
        del
    MISCELANEOUS
        empty
        set
        get
        resizeEmpty
        resizeZero
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

#ifndef PSIORDEREDLIST_C
#define PSIORDEREDLIST_C

/*
Name: orderedList_t	
Description: A orderedList struct.
Properties:
    size: an integer with the size of the orderedList.
    entry: a void pointer to value. No indexing
        included.
    orderedList_t_link: a void pointer for linking 
        porposes.
*/
typedef struct orderedList_s{
    uint64_t orderedList_size;
    map_t* entry;
    void* orderedList_t_link;
}orderedList_t;

#endif