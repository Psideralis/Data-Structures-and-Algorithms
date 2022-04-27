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
#ifndef DYNAMICTABLE_C
#define DYNAMICTABLE_C

typedef struct dynamicTable_s{
    void* item;
} dynamicTable_t;


PSI_RET_t dynamicTable_t_zinit(dynamicTable_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicTable_t_init(dynamicTable_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicTable_t_new(dynamicTable_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicTable_t_del(dynamicTable_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicTable_t_get(dynamicTable_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicTable_t_emptyTable(dynamicTable_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicTable_t_resizeEmptyTable(dynamicTable_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicTable_t_isempty(dynamicTable_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicTable_t_getSize(dynamicTable_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicTable_t_setSize(dynamicTable_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicTable_t_getKey(dynamicTable_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicTable_t_setKey(dynamicTable_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicTable_t_addKey(dynamicTable_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicTable_t_delKey(dynamicTable_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicTable_t_getValue(dynamicTable_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicTable_t_setValue(dynamicTable_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicTable_t_addValue(dynamicTable_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicTable_t_delValue(dynamicTable_t* self){
    return NO_ERROR;
}
PSI_RET_t dynamicTable_t_exchangeValue(dynamicTable_t* self){
    return NO_ERROR;
}
#endif