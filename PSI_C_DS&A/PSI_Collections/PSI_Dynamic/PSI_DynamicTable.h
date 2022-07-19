/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: DynamicTable.hpp
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:
    PSI_DYNAMICTABLE_C
STRUCTS:
    dynamicTable_s

ENUMS:

TYPES:
    dynamicTable_t
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

#ifndef PSI_DYNAMICTABLE_C
#define PSI_DYNAMICTABLE_C

typedef struct dynamicTable_s{
    void* item;
} dynamicTable_t;

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dynamicTable_t_zeromem_alloc(dynamicTable_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dynamicTable_t_init(dynamicTable_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dynamicTable_t_null_init(dynamicTable_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dynamicTable_t_range_init(dynamicTable_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dynamicTable_t_reinit(dynamicTable_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dynamicTable_t_dealloc(dynamicTable_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dynamicTable_t_set(dynamicTable_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dynamicTable_t_get(dynamicTable_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dynamicTable_t_copy(dynamicTable_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t dynamicTable_t_resize(dynamicTable_t* self){
    return NO_ERROR;
}
#endif