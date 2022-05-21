/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Pantograph.hpp
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 
#ifndef PANTOGRAPH_C
#define PANTOGRAPH_C

typedef struct pantograph_s{
    void* item;
} pantograph_t;

PSI_RET_t pantograph_t_zinit(pantograph_t* self){
    return NO_ERROR;
}
PSI_RET_t pantograph_t_init(pantograph_t* self){
    return NO_ERROR;
}
PSI_RET_t pantograph_t_new(pantograph_t* self){
    return NO_ERROR;
}
PSI_RET_t pantograph_t_del(pantograph_t* self){
    return NO_ERROR;
}
PSI_RET_t pantograph_t_get(pantograph_t* self){
    return NO_ERROR;
}
PSI_RET_t pantograph_t_emptyTable(pantograph_t* self){
    return NO_ERROR;
}
PSI_RET_t pantograph_t_resizeEmptyTable(pantograph_t* self){
    return NO_ERROR;
}
PSI_RET_t pantograph_t_isempty(pantograph_t* self){
    return NO_ERROR;
}
PSI_RET_t pantograph_t_getSize(pantograph_t* self){
    return NO_ERROR;
}
PSI_RET_t pantograph_t_setSize(pantograph_t* self){
    return NO_ERROR;
}
PSI_RET_t pantograph_t_getKey(pantograph_t* self){
    return NO_ERROR;
}
PSI_RET_t pantograph_t_setKey(pantograph_t* self){
    return NO_ERROR;
}
PSI_RET_t pantograph_t_addKey(pantograph_t* self){
    return NO_ERROR;
}
PSI_RET_t pantograph_t_delKey(pantograph_t* self){
    return NO_ERROR;
}
PSI_RET_t pantograph_t_getValue(pantograph_t* self){
    return NO_ERROR;
}
PSI_RET_t pantograph_t_setValue(pantograph_t* self){
    return NO_ERROR;
}
PSI_RET_t pantograph_t_addValue(pantograph_t* self){
    return NO_ERROR;
}
PSI_RET_t pantograph_t_delValue(pantograph_t* self){
    return NO_ERROR;
}
PSI_RET_t pantograph_t_exchangeValue(pantograph_t* self){
    return NO_ERROR;
}

#endif