/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: DoubleLinkedList.hpp
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 
#ifndef DLINKEDLIST_C
#define DLINKEDLIST_C

typedef struct dLinkedList_t{
    void* item;
} dLinkedList_t;


PSI_RET_t dLinkedList_t_zinit(dLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t dLinkedList_t_init(dLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t dLinkedList_t_new(dLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t dLinkedList_t_del(dLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t dLinkedList_t_get(dLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t dLinkedList_t_emptyTable(dLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t dLinkedList_t_resizeEmptyTable(dLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t dLinkedList_t_isempty(dLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t dLinkedList_t_getSize(dLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t dLinkedList_t_setSize(dLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t dLinkedList_t_getKey(dLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t dLinkedList_t_setKey(dLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t dLinkedList_t_addKey(dLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t dLinkedList_t_delKey(dLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t dLinkedList_t_getValue(dLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t dLinkedList_t_setValue(dLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t dLinkedList_t_addValue(dLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t dLinkedList_t_delValue(dLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t dLinkedList_t_exchangeValue(dLinkedList_t* self){
    return NO_ERROR;
}
#endif