/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: LinkedList2D.h
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 

#ifndef MULTIPLELINKSTACK_C
#define MULTIPLELINKSTACK_C

typedef struct multipleLinkedStack_s{
    void* item;
} multipleLinkedStack_t;

PSI_RET_t multipleLinkedStack_t_zinit(multipleLinkedStack_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedStack_t_init(multipleLinkedStack_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedStack_t_new(multipleLinkedStack_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedStack_t_del(multipleLinkedStack_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedStack_t_get(multipleLinkedStack_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedStack_t_emptyTable(multipleLinkedStack_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedStack_t_resizeEmptyTable(multipleLinkedStack_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedStack_t_isempty(multipleLinkedStack_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedStack_t_getSize(multipleLinkedStack_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedStack_t_setSize(multipleLinkedStack_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedStack_t_getKey(multipleLinkedStack_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedStack_t_setKey(multipleLinkedStack_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedStack_t_addKey(multipleLinkedStack_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedStack_t_delKey(multipleLinkedStack_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedStack_t_getValue(multipleLinkedStack_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedStack_t_setValue(multipleLinkedStack_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedStack_t_addValue(multipleLinkedStack_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedStack_t_delValue(multipleLinkedStack_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedStack_t_exchangeValue(multipleLinkedStack_t* self){
    return NO_ERROR;
}

#endif