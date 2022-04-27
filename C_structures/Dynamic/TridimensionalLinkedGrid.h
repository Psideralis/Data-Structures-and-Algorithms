/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: LinkedList3D.h
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 
#ifndef LINKEDGRID3D_H
#define LINKEDGRID3D_H

typedef struct element_s{
    void* item;
} element_t;

typedef struct linkekGrid3D_s{
    void* item;
}linkedGrid3D_t;

PSI_RET_t new_linkedGrid3D_t(linkedGrid3D_t self, int size, element_t* entry){

}
    
PSI_RET_t del_linkedGrid3D_t(linkedGrid3D_t self){
}

PSI_RET_t linkedGrid3D_t_zinit(linkedGrid3D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid3D_t_init(linkedGrid3D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid3D_t_new(linkedGrid3D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid3D_t_del(linkedGrid3D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid3D_t_get(linkedGrid3D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid3D_t_emptyTable(linkedGrid3D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid3D_t_resizeEmptyTable(linkedGrid3D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid3D_t_isempty(linkedGrid3D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid3D_t_getSize(linkedGrid3D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid3D_t_setSize(linkedGrid3D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid3D_t_getKey(linkedGrid3D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid3D_t_setKey(linkedGrid3D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid3D_t_addKey(linkedGrid3D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid3D_t_delKey(linkedGrid3D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid3D_t_getValue(linkedGrid3D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid3D_t_setValue(linkedGrid3D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid3D_t_addValue(linkedGrid3D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid3D_t_delValue(linkedGrid3D_t* self){
    return NO_ERROR;
}
PSI_RET_t linkedGrid3D_t_exchangeValue(linkedGrid3D_t* self){
    return NO_ERROR;
}

#endif