/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: ArrayList.hpp
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 
#ifndef STACK_C
#define STACK_C


typedef struct element_s{;
    void* item;
} element_t;

typedef struct stack_s{
    int size;
    element_t* entry;
}stack_t;

void stack_t_push(stack_t* self, element_t element){

}

void stack_t_pop(stack_t* self, element_t element){

}

#endif