/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: MultipleLinkedTetradimensionalLinked
    List.h
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 

#ifndef MULTIPLELINKED4DLINKEDLIST_C
#define MULTIPLELINKED4DLINKEDLIST_C

typedef struct multipleLinkedList4D_s{
    void* item;
} multipleLinkedList4D_t;

PSI_RET_t multipleLinkedList4D_t_zinit(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedList4D_t_init(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedList4D_t_new(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedList4D_t_del(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedList4D_t_get(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedList4D_t_emptyTable(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedList4D_t_resizeEmptyTable(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedList4D_t_isempty(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedList4D_t_getSize(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedList4D_t_setSize(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedList4D_t_getKey(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedList4D_t_setKey(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedList4D_t_addKey(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedList4D_t_delKey(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedList4D_t_getValue(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedList4D_t_setValue(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedList4D_t_addValue(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedList4D_t_delValue(multipleLinkedList4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedList4D_t_exchangeValue(multipleLinkedList4D_t* self){
    return NO_ERROR;
}

#endif