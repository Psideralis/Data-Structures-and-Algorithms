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

PSI_RET_t stack_t_push(stack_t* self, element_t element){
    return NO_ERROR;
}

PSI_RET_t stack_t_pop(stack_t* self, element_t element){
    return NO_ERROR;
}

PSI_RET_t stack_t_zinit(stack_t* self){
    return NO_ERROR;
}
PSI_RET_t stack_t_init(stack_t* self){
    return NO_ERROR;
}
PSI_RET_t stack_t_new(stack_t* self){
    return NO_ERROR;
}
PSI_RET_t stack_t_del(stack_t* self){
    return NO_ERROR;
}
PSI_RET_t stack_t_get(stack_t* self){
    return NO_ERROR;
}
PSI_RET_t stack_t_emptyTuple(stack_t* self){
    return NO_ERROR;
}
PSI_RET_t stack_t_resizeEmptyTuple(stack_t* self){
    return NO_ERROR;
}
PSI_RET_t stack_t_isempty(stack_t* self){
    return NO_ERROR;
}
PSI_RET_t stack_t_getSize(stack_t* self){
    return NO_ERROR;
}
PSI_RET_t stack_t_setSize(stack_t* self){
    return NO_ERROR;
}
PSI_RET_t stack_t_getKey(stack_t* self){
    return NO_ERROR;
}
PSI_RET_t stack_t_setKey(stack_t* self){
    return NO_ERROR;
}
PSI_RET_t stack_t_addKey(stack_t* self){
    return NO_ERROR;
}
PSI_RET_t stack_t_delKey(stack_t* self){
    return NO_ERROR;
}
PSI_RET_t stack_t_getValue(stack_t* self){
    return NO_ERROR;
}
PSI_RET_t stack_t_setValue(stack_t* self){
    return NO_ERROR;
}
PSI_RET_t stack_t_addValue(stack_t* self){
    return NO_ERROR;
}
PSI_RET_t stack_t_delValue(stack_t* self){
    return NO_ERROR;
}
PSI_RET_t stack_t_exchangeValue(stack_t* self){
    return NO_ERROR;
}

#endif