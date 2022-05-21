/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: TetradimensionalLinkedGrid.h
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 

#ifndef LINKEDGRID4D_C
#define LINKEDGRID4D_C

typedef struct LinkedGrid4D_s{
    void* item;
} linkedGrid4D_t;

PSI_RET_t linkedGrid4D_t_zinit(linkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid4D_t_init(linkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid4D_t_new(linkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid4D_t_del(linkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid4D_t_get(linkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid4D_t_emptyTable(linkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid4D_t_resizeEmptyTable(linkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid4D_t_isempty(linkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid4D_t_getSize(linkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid4D_t_setSize(linkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid4D_t_getKey(linkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid4D_t_setKey(linkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid4D_t_addKey(linkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid4D_t_delKey(linkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid4D_t_getValue(linkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid4D_t_setValue(linkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid4D_t_addValue(linkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid4D_t_delValue(linkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid4D_t_exchangeValue(linkedGrid4D_t* self){
    return NO_ERROR;
}

#endif