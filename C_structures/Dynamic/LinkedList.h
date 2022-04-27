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
#ifndef LINKEDLIST_C
#define LINKEDLIST_C

typedef struct linkedList_s{
    void* item;
} linkedList_t;


PSI_RET_t linkedList_t_zinit(linkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedList_t_init(linkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedList_t_new(linkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedList_t_del(linkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedList_t_get(linkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedList_t_emptyTable(linkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedList_t_resizeEmptyTable(linkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedList_t_isempty(linkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedList_t_getSize(linkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedList_t_setSize(linkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedList_t_getKey(linkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedList_t_setKey(linkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedList_t_addKey(linkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedList_t_delKey(linkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedList_t_getValue(linkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedList_t_setValue(linkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedList_t_addValue(linkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedList_t_delValue(linkedList_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedList_t_exchangeValue(linkedList_t* self){
    return NO_ERROR;
}
#endif