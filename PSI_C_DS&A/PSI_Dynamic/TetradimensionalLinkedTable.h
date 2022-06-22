/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: TetradimensionalLinkedTable.h
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 

#ifndef LINKEDTABLE4D_C
#define LINKEDTABLE4D_C

typedef struct LinkedTabled4D_s{
    void* item;
} linkedTabled4D_t;

PSI_RET_t linkedTabled4D_t_zinit(linkedTabled4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedTabled4D_t_init(linkedTabled4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedTabled4D_t_new(linkedTabled4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedTabled4D_t_del(linkedTabled4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedTabled4D_t_get(linkedTabled4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedTabled4D_t_emptyTable(linkedTabled4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedTabled4D_t_resizeEmptyTable(linkedTabled4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedTabled4D_t_isempty(linkedTabled4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedTabled4D_t_getSize(linkedTabled4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedTabled4D_t_setSize(linkedTabled4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedTabled4D_t_getKey(linkedTabled4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedTabled4D_t_setKey(linkedTabled4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedTabled4D_t_addKey(linkedTabled4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedTabled4D_t_delKey(linkedTabled4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedTabled4D_t_getValue(linkedTabled4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedTabled4D_t_setValue(linkedTabled4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedTabled4D_t_addValue(linkedTabled4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedTabled4D_t_delValue(linkedTabled4D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedTabled4D_t_exchangeValue(linkedTabled4D_t* self){
    return NO_ERROR;
}

#endif