/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: ArrayList.h
Description: An array list is a grouping of the
same type. It is not natively ordered and do 
not have repeated elements.
********************************************* */ 


/* *********************************************
INCLUDES:
    PSI_DataStructures
MACROS:
    CSTD
	PSI_ARRAYLIST_H
STRUCTS:
    arrayElement_s
    arrayList_s
ENUMS:

TYPES:
    arrayList_s
    arrayList_t
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

#ifndef CSTD
#define CSTD
    #include <stdlib.h>
    #include <stdio.h>
    #include <stdarg.h>
    #include <string.h>
    #include <cstdint>
    #include <stdint.h>
#endif

#ifndef PSI_ARRAYLIST_H
#define PSI_ARRAYLIST_H

/*
Name: arrayElement_t	
Description: A light array list struct.
Properties:
    size: an integer with the size of the arrayList.
    entry: a void pointer to value. No indexing
        included.
    arrayList_t_link: a void pointer for linking 
        porposes.
*/
typedef struct arrayElement_s{
    uint64_t item_size;
    void* item;
    void* arrayElement_t_link;
}arrayElement_t;

/*
Name: arrayList_t	
Description: A light arrayList struct.
Properties:
    size: an integer with the size of the arrayList.
    entry: a void pointer to value. No indexing
        included.
    arrayList_t_link: a void pointer for linking 
        porposes.
*/
typedef struct arrayList_s{
    uint64_t arrayList_size;
    arrayElement_t* entry;
    void* arrayList_t_link;
}arrayList_t;

PSI_RET arrayList_t_new(arrayList_t* self, int size, element_t* entry){
    if(self->entry != NULL){
        self->size = size;
        self->entry = (element_t *)realloc(self->entry,sizeof(element_t)*self->size);
        if (self->entry == NULL){
            return NULLPTR_ERROR;
        }
        for(int i =0 ; i < self->size; i++){
            self->entry[i].item = entry;
        }
        return NO_ERROR;
    }else {
        self->size = size;
        self->entry = (element_t *)malloc(sizeof(element_t)*self->size);
        if (self->entry == NULL){
            return NULLPTR_ERROR;
        }
        for(int i =0 ; i < self->size; i++){
            self->entry[i].item = entry;
        }
        return NO_ERROR;
    }
}

PSI_RET arrayList_t_init(arrayList_t* self, int size, void* entry){
    if(self->entry != NULL){
        self->size = size;
        self->entry = (element_t *)realloc(self->entry,sizeof(element_t)*self->size);
        if (self->entry == NULL){
            return NULLPTR_ERROR;
        }
        for(int i =0 ; i < self->size; i++){
            self->entry[i].item = entry;
        }
        return NO_ERROR;
    }else {
        self->size = size;
        self->entry = (element_t *)malloc(sizeof(element_t)*self->size);
        if (self->entry == NULL){
            return NULLPTR_ERROR;
        }
        for(int i =0 ; i < self->size; i++){
            self->entry[i].item = entry;
        }
        return NO_ERROR;
    }
}

PSI_RET arrayList_t_zinit(arrayList_t* self, int size){
    if(self->entry != NULL){
        self->size = size;
        self->entry = (element_t *)realloc(self->entry,sizeof(element_t)*self->size);
        if (self->entry == NULL){
            return NULLPTR_ERROR;
        }
        for(int i =0 ; i < self->size; i++){
            self->entry[i].item = ((void*)0);
        }
        return NO_ERROR;
    }else {
        self->size = size;
        self->entry = (element_t *)malloc(sizeof(element_t)*self->size);
        if (self->entry == NULL){
            return NULLPTR_ERROR;
        }
        for(int i =0 ; i < self->size; i++){
            self->entry[i].item = ((void*)0);
        }
        return NO_ERROR;
    }
}
  
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayList_t_zeromem_alloc(arrayList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayList_t_init(arrayList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayList_t_null_init(arrayList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayList_t_range_init(arrayList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayList_t_reinit(arrayList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayList_t_dealloc(arrayList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayList_t_set(arrayList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayList_t_get(arrayList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayList_t_copy(arrayList_t* self){
    return NO_ERROR;
}
/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET_t arrayList_t_resize(arrayList_t* self){
    return NO_ERROR;
}

#endif