/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Stack.hpp
Description:
********************************************* */ 

/* *********************************************
INCLUDES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 
#ifndef STACK_C
#define STACK_C


typedef struct element_s{
    unsigned int item_size;
    void* item;
    void* element_t_link;
} element_t;

typedef struct stack_s{
    void* base;
    element_t* top;
    int size;
    void* stack_t_link;
}stack_t;

void stack_t_push(stack_t* self, element_t element){

}

void stack_t_pop(stack_t* self, element_t element){

}

#endif