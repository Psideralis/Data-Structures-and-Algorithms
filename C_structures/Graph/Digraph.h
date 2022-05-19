/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Digraph.hpp
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 
#ifndef DIGRAPH_C
#define DIGRAPH_C

typedef struct digraph_s{
    void* item;
} digraph_t;

PSI_RET_t digraph_t_zinit(digraph_t* self){
    return NO_ERROR;
}
PSI_RET_t digraph_t_init(digraph_t* self){
    return NO_ERROR;
}
PSI_RET_t digraph_t_new(digraph_t* self){
    return NO_ERROR;
}
PSI_RET_t digraph_t_del(digraph_t* self){
    return NO_ERROR;
}
PSI_RET_t digraph_t_get(digraph_t* self){
    return NO_ERROR;
}
PSI_RET_t digraph_t_emptyTable(digraph_t* self){
    return NO_ERROR;
}
PSI_RET_t digraph_t_resizeEmptyTable(digraph_t* self){
    return NO_ERROR;
}
PSI_RET_t digraph_t_isempty(digraph_t* self){
    return NO_ERROR;
}
PSI_RET_t digraph_t_getSize(digraph_t* self){
    return NO_ERROR;
}
PSI_RET_t digraph_t_setSize(digraph_t* self){
    return NO_ERROR;
}
PSI_RET_t digraph_t_getKey(digraph_t* self){
    return NO_ERROR;
}
PSI_RET_t digraph_t_setKey(digraph_t* self){
    return NO_ERROR;
}
PSI_RET_t digraph_t_addKey(digraph_t* self){
    return NO_ERROR;
}
PSI_RET_t digraph_t_delKey(digraph_t* self){
    return NO_ERROR;
}
PSI_RET_t digraph_t_getValue(digraph_t* self){
    return NO_ERROR;
}
PSI_RET_t digraph_t_setValue(digraph_t* self){
    return NO_ERROR;
}
PSI_RET_t digraph_t_addValue(digraph_t* self){
    return NO_ERROR;
}
PSI_RET_t digraph_t_delValue(digraph_t* self){
    return NO_ERROR;
}
PSI_RET_t digraph_t_exchangeValue(digraph_t* self){
    return NO_ERROR;
}
#endif