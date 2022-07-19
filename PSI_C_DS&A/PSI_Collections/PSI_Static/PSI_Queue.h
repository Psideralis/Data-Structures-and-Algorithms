/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Queue.hpp
Description:
********************************************* */ 

/* *********************************************
INCLUDES:
    PSI_DataStructures
MACROS:
    CSTD
    PSI_QUEUE_C
STRUCTS:
    queue_s
ENUMS:

TYPES:
    queue_t
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

#ifndef PSI_QUEUE_C
#define PSI_QUEUE_C

typedef struct queue_s{
    void* base;
    int** allocBlock_sizes;
    void** allocBlock;
    void* queue_t_link;
} queue_t;

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t queue_t_zeromem_alloc(queue_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t queue_t_init(queue_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t queue_t_null_init(queue_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t queue_t_range_init(queue_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t queue_t_reinit(queue_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t queue_t_dealloc(queue_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t queue_t_set(queue_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t queue_t_get(queue_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t queue_t_copy(queue_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t queue_t_resize(queue_t* self){
    return NO_ERROR;
}

#endif