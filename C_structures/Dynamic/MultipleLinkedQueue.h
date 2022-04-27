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
#ifndef MULTIPLELINKQUEUE_C
#define MULTIPLELINKQUEUE_C

typedef struct multipleLinkedQueue_s{
    void* item;
} multipleLinkedQueue_t;

PSI_RET_t multipleLinkedQueue_t_zinit(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedQueue_t_init(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedQueue_t_new(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedQueue_t_del(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedQueue_t_get(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedQueue_t_emptyTable(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedQueue_t_resizeEmptyTable(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedQueue_t_isempty(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedQueue_t_getSize(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedQueue_t_setSize(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedQueue_t_getKey(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedQueue_t_setKey(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedQueue_t_addKey(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedQueue_t_delKey(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedQueue_t_getValue(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedQueue_t_setValue(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedQueue_t_addValue(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedQueue_t_delValue(multipleLinkedQueue_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedQueue_t_exchangeValue(multipleLinkedQueue_t* self){
    return NO_ERROR;
}

#endif