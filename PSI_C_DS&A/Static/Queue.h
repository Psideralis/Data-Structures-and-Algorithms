/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Queue.hpp
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
#ifndef QUEUE_C
#define QUEUE_C

typedef struct queue_s{
    void* base;
    int** allocBlock_sizes;
    void** allocBlock;
    void* queue_t_link;
} queue_t;

PSI_RET_t queue_t_zinit(queue_t* self){
    return NO_ERROR;
}
PSI_RET_t queue_t_init(queue_t* self){
    return NO_ERROR;
}
PSI_RET_t queue_t_new(queue_t* self){
    return NO_ERROR;
}
PSI_RET_t queue_t_del(queue_t* self){
    return NO_ERROR;
}
PSI_RET_t queue_t_get(queue_t* self){
    return NO_ERROR;
}
PSI_RET_t queue_t_emptyMultiMap(queue_t* self){
    return NO_ERROR;
}
PSI_RET_t queue_t_resizeEmptyMultiMap(queue_t* self){
    return NO_ERROR;
}
PSI_RET_t queue_t_isempty(queue_t* self){
    return NO_ERROR;
}
PSI_RET_t queue_t_getSize(queue_t* self){
    return NO_ERROR;
}
PSI_RET_t queue_t_setSize(queue_t* self){
    return NO_ERROR;
}
PSI_RET_t queue_t_getKey(queue_t* self){
    return NO_ERROR;
}
PSI_RET_t queue_t_setKey(queue_t* self){
    return NO_ERROR;
}
PSI_RET_t queue_t_addKey(queue_t* self){
    return NO_ERROR;
}
PSI_RET_t queue_t_delKey(queue_t* self){
    return NO_ERROR;
}
PSI_RET_t queue_t_getValue(queue_t* self){
    return NO_ERROR;
}
PSI_RET_t queue_t_setValue(queue_t* self){
    return NO_ERROR;
}
PSI_RET_t queue_t_addValue(queue_t* self){
    return NO_ERROR;
}
PSI_RET_t queue_t_delValue(queue_t* self){
    return NO_ERROR;
}
PSI_RET_t queue_t_exchangeValue(queue_t* self){
    return NO_ERROR;
}

#endif