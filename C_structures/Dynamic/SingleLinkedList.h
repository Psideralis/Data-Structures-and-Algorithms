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
#ifndef SLINKEDLIST_C
#define SLINKEDLIST_C

typedef struct sLinkedList_t{
    void* item;
} sLinkedList_t;

PSI_RET_t sLinkedList_t_zinit(sLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t sLinkedList_t_init(sLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t sLinkedList_t_new(sLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t sLinkedList_t_del(sLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t sLinkedList_t_get(sLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t sLinkedList_t_emptyTable(sLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t sLinkedList_t_resizeEmptyTable(sLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t sLinkedList_t_isempty(sLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t sLinkedList_t_getSize(sLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t sLinkedList_t_setSize(sLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t sLinkedList_t_getKey(sLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t sLinkedList_t_setKey(sLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t sLinkedList_t_addKey(sLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t sLinkedList_t_delKey(sLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t sLinkedList_t_getValue(sLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t sLinkedList_t_setValue(sLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t sLinkedList_t_addValue(sLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t sLinkedList_t_delValue(sLinkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t sLinkedList_t_exchangeValue(sLinkedList_t* self){
    return NO_ERROR;
}

#endif