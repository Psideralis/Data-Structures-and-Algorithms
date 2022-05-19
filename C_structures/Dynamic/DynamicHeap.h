/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: DynamicHeap.h
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 

#ifndef DYNAMICHEAP_C
#define DYNAMICHEAP_C

typedef struct dynamicHeap_s{
    void* item;
} dynamicHeap_t;

PSI_RET_t dynamicHeap_t_zinit(dynamicHeap_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicHeap_t_init(dynamicHeap_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicHeap_t_new(dynamicHeap_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicHeap_t_del(dynamicHeap_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicHeap_t_get(dynamicHeap_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicHeap_t_emptyTable(dynamicHeap_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicHeap_t_resizeEmptyTable(dynamicHeap_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicHeap_t_isempty(dynamicHeap_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicHeap_t_getSize(dynamicHeap_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicHeap_t_setSize(dynamicHeap_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicHeap_t_getKey(dynamicHeap_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicHeap_t_setKey(dynamicHeap_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicHeap_t_addKey(dynamicHeap_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicHeap_t_delKey(dynamicHeap_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicHeap_t_getValue(dynamicHeap_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicHeap_t_setValue(dynamicHeap_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicHeap_t_addValue(dynamicHeap_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicHeap_t_delValue(dynamicHeap_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicHeap_t_exchangeValue(dynamicHeap_t* self){
    return NO_ERROR;
}
#endif