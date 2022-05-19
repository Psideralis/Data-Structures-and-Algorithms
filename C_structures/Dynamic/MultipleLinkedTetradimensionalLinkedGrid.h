/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: MultipleLinkedTetradimensionalLinked
    List.h
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 

#ifndef MULTIPLELINKED4DLINKEDGRID_C
#define MULTIPLELINKED4DLINKEDGRID_C

typedef struct multipleLinkedGrid4D_s{
    void* item;
} multipleLinkedGrid4D_t;

PSI_RET_t multipleLinkedGrid4D_t_zinit(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedGrid4D_t_init(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedGrid4D_t_new(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedGrid4D_t_del(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedGrid4D_t_get(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedGrid4D_t_emptyTable(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedGrid4D_t_resizeEmptyTable(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedGrid4D_t_isempty(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedGrid4D_t_getSize(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedGrid4D_t_setSize(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedGrid4D_t_getKey(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedGrid4D_t_setKey(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedGrid4D_t_addKey(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedGrid4D_t_delKey(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedGrid4D_t_getValue(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedGrid4D_t_setValue(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedGrid4D_t_addValue(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedGrid4D_t_delValue(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}
PSI_RET_t multipleLinkedGrid4D_t_exchangeValue(multipleLinkedGrid4D_t* self){
    return NO_ERROR;
}

#endif