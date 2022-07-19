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
    PSI_DataStructures
MACROS:
    CSTD
    PSI_TUPLE_H
STRUCTS:
    tuple_s
    xcarrier_tuple_s
    light_tuple_s
    carrier_tuple_s
ENUMS:

TYPES:
    tuple_t
    xcarrier_tuple_t
    light_tuple_t
    carrier_tuple_t
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

#ifndef PSI_TUPLE_H
#define PSI_TUPLE_H

/*
Name: tuple_t	
Description: A tuple struct.
Properties:
    size: an integer with the size of the tuple.
    entry: a pointer to a map_t struct that holds
        an integer with the position in the tuple
        and the correspondent entry.
    tuple_t_link: a void pointer for linking 
        purposes.
*/
typedef struct tuple_s{
    uint64_t tuple_size;
    map_t* entry;
    void* tuple_t_link;
}tuple_t;

/*
Name: xcarrier_tuple_t	
Description: A carrier tuple struct.
Properties:
    size: an long double size.
    entry: a pointer to a map_t struct that holds
        an integer with the position in the tuple
        and the correspondent entry.
    tuple_t_link: a void pointer for linking 
        porposes.
*/
typedef struct xcarrier_tuple_s{
    unsigned long long int size;
    map_t* entry;
    void* carrier_tuple_t_link;
}xcarrier_tuple_t;


/*
Name: light_tuple_t	
Description: A light tuple struct.
Properties:
    size: an integer with the size of the tuple.
    entry: a void pointer to value. No indexing
        included.
    tuple_t_link: a void pointer for linking 
        porposes.
*/
typedef struct light_tuple_s{
    uint64_t size;
    void* entry;
    void* light_tuple_t_link;
}light_tuple_t;

/*
Name: carrier_tuple_t	
Description: A carrier tuple struct.
Properties:
    size: an long double size.
    entry: a void pointer to value. No indexing
        included.
    tuple_t_link: a void pointer for linking 
        porposes.
*/
typedef struct carrier_tuple_s{
    unsigned long long int size;
    void* entry;
    void* carrier_tuple_t_link;
}carrier_tuple_t;

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t tuple_t_zeromem_alloc(tuple_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t tuple_t_init(tuple_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t tuple_t_null_init(tuple_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t tuple_t_range_init(tuple_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t tuple_t_reinit(tuple_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t tuple_t_dealloc(tuple_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t tuple_t_set(tuple_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t tuple_t_get(tuple_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t tuple_t_copy(tuple_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t tuple_t_resize(tuple_t* self){
    return NO_ERROR;
}

#endif