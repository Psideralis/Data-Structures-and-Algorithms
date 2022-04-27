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
#ifndef TREE_C
#define TREE_C

typedef struct tree_s{
    void* item;
} tree_t;

PSI_RET_t tree_t_zinit(tree_t* self){
    return NO_ERROR;
}
PSI_RET_t tree_t_init(tree_t* self){
    return NO_ERROR;
}
PSI_RET_t tree_t_new(tree_t* self){
    return NO_ERROR;
}
PSI_RET_t tree_t_del(tree_t* self){
    return NO_ERROR;
}
PSI_RET_t tree_t_get(tree_t* self){
    return NO_ERROR;
}
PSI_RET_t tree_t_emptyTable(tree_t* self){
    return NO_ERROR;
}
PSI_RET_t tree_t_resizeEmptyTable(tree_t* self){
    return NO_ERROR;
}
PSI_RET_t tree_t_isempty(tree_t* self){
    return NO_ERROR;
}
PSI_RET_t tree_t_getSize(tree_t* self){
    return NO_ERROR;
}
PSI_RET_t tree_t_setSize(tree_t* self){
    return NO_ERROR;
}
PSI_RET_t tree_t_getKey(tree_t* self){
    return NO_ERROR;
}
PSI_RET_t tree_t_setKey(tree_t* self){
    return NO_ERROR;
}
PSI_RET_t tree_t_addKey(tree_t* self){
    return NO_ERROR;
}
PSI_RET_t tree_t_delKey(tree_t* self){
    return NO_ERROR;
}
PSI_RET_t tree_t_getValue(tree_t* self){
    return NO_ERROR;
}
PSI_RET_t tree_t_setValue(tree_t* self){
    return NO_ERROR;
}
PSI_RET_t tree_t_addValue(tree_t* self){
    return NO_ERROR;
}
PSI_RET_t tree_t_delValue(tree_t* self){
    return NO_ERROR;
}
PSI_RET_t tree_t_exchangeValue(tree_t* self){
    return NO_ERROR;
}

#endif