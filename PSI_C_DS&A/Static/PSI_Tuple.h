/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Tuple.h
Description: A tuple is a grouping of mixed
elements. It is not natively ordered and can
have repeated elements.

********************************************* */ 


/* *********************************************
INCLUDES:
	PSI_TUPLE_H
MACROS:

STRUCTS:
    tuple_s
ENUMS:

TYPES:
    tuple_t
FUNCTIONS:
    BASICS
        zeroalloc
        zeroinit
        rangeinit
            int
            double
        init
            int
            double
            set_t
        new
            args_list
            set_array
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

#ifndef PSI_TUPLE_H
#define PSI_TUPLE_H

typedef struct tuple_s{
    uint64_t tuple_size;
    map_t* entry;
    void* tuple_t_link;
}tuple_t;


#endif