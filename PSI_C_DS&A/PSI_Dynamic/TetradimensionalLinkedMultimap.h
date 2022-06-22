/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: TetradimensionalLinkedMultimap.h
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 

#ifndef LINKEDMULTIMAP4D_C
#define LINKEDMULTIMAP4D_C

typedef struct LinkedMultimap4D_s{
    void* item;
} linkedMultimap4D_t;

PSI_RET_t linkedMultimap4D_t_zinit(linkedMultimap4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedMultimap4D_t_init(linkedMultimap4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedMultimap4D_t_new(linkedMultimap4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedMultimap4D_t_del(linkedMultimap4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedMultimap4D_t_get(linkedMultimap4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedMultimap4D_t_emptyTable(linkedMultimap4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedMultimap4D_t_resizeEmptyTable(linkedMultimap4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedMultimap4D_t_isempty(linkedMultimap4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedMultimap4D_t_getSize(linkedMultimap4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedMultimap4D_t_setSize(linkedMultimap4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedMultimap4D_t_getKey(linkedMultimap4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedMultimap4D_t_setKey(linkedMultimap4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedMultimap4D_t_addKey(linkedMultimap4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedMultimap4D_t_delKey(linkedMultimap4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedMultimap4D_t_getValue(linkedMultimap4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedMultimap4D_t_setValue(linkedMultimap4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedMultimap4D_t_addValue(linkedMultimap4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedMultimap4D_t_delValue(linkedMultimap4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedMultimap4D_t_exchangeValue(linkedMultimap4D_t* self){
    return NO_ERROR;
}

#endif