/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: PSI_BinaryTree.hpp
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:
    CSTD
    PSI_BINARYTREE_C
STRUCTS:
    node_s
    binaryTree_s
ENUMS:

TYPES:
    node_t
    binaryTree_t
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

#ifndef PSI_BINARYTREE_C
#define PSI_BINARYTREE_C

typedef struct node_s{
    uint64_t node_t_link;
    map_t* node_t_link;
    void* node_t_link;
} node_t;

typedef struct binaryTree_s{
    node_t* root;
} binaryTree_t;

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t binaryTree_t_zeromem_alloc(binaryTree_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t binaryTree_t_init(binaryTree_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t binaryTree_t_null_init(binaryTree_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t binaryTree_t_range_init(binaryTree_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t binaryTree_t_reinit(binaryTree_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t binaryTree_t_dealloc(binaryTree_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t binaryTree_t_set(binaryTree_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t binaryTree_t_get(binaryTree_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t binaryTree_t_copy(binaryTree_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t binaryTree_t_resize(binaryTree_t* self){
    return NO_ERROR;
}

#endif