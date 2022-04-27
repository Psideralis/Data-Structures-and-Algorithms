/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: linkedGrid2D_t.h
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 
#ifndef BLINKEDGRID_H
#define BLINKEDGRID_H

typedef struct element_s{
    void* item;
} element_t;

typedef struct linkedGrid2D_s{
    void* item;
}linkedGrid2D_t;

PSI_RET_t new_linkedGrid2D_t(linkedGrid2D_t self, int size, element_t* entry){
    return NO_ERROR;
}   
    
PSI_RET_t del_linkedGrid2D_t(linkedGrid2D_t self){
    return NO_ERROR;
}


PSI_RET_t linkedGrid2D_t_zinit(linkedGrid2D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid2D_t_init(linkedGrid2D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid2D_t_new(linkedGrid2D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid2D_t_del(linkedGrid2D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid2D_t_get(linkedGrid2D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid2D_t_emptyTable(linkedGrid2D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid2D_t_resizeEmptyTable(linkedGrid2D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid2D_t_isempty(linkedGrid2D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid2D_t_getSize(linkedGrid2D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid2D_t_setSize(linkedGrid2D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid2D_t_getKey(linkedGrid2D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid2D_t_setKey(linkedGrid2D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid2D_t_addKey(linkedGrid2D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid2D_t_delKey(linkedGrid2D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid2D_t_getValue(linkedGrid2D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid2D_t_setValue(linkedGrid2D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid2D_t_addValue(linkedGrid2D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid2D_t_delValue(linkedGrid2D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid2D_t_exchangeValue(linkedGrid2D_t* self){
    return NO_ERROR;
}

#endif