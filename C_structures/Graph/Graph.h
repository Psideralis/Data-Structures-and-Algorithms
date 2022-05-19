/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Graph.hpp
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 
#ifndef GRAPH_C
#define GRAPH_C

typedef struct graph_s{
    void* item;
} graph_t;

PSI_RET_t graph_t_zinit(graph_t* self){
    return NO_ERROR;
}
PSI_RET_t graph_t_init(graph_t* self){
    return NO_ERROR;
}
PSI_RET_t graph_t_new(graph_t* self){
    return NO_ERROR;
}
PSI_RET_t graph_t_del(graph_t* self){
    return NO_ERROR;
}
PSI_RET_t graph_t_get(graph_t* self){
    return NO_ERROR;
}
PSI_RET_t graph_t_emptyTable(graph_t* self){
    return NO_ERROR;
}
PSI_RET_t graph_t_resizeEmptyTable(graph_t* self){
    return NO_ERROR;
}
PSI_RET_t graph_t_isempty(graph_t* self){
    return NO_ERROR;
}
PSI_RET_t graph_t_getSize(graph_t* self){
    return NO_ERROR;
}
PSI_RET_t graph_t_setSize(graph_t* self){
    return NO_ERROR;
}
PSI_RET_t graph_t_getKey(graph_t* self){
    return NO_ERROR;
}
PSI_RET_t graph_t_setKey(graph_t* self){
    return NO_ERROR;
}
PSI_RET_t graph_t_addKey(graph_t* self){
    return NO_ERROR;
}
PSI_RET_t graph_t_delKey(graph_t* self){
    return NO_ERROR;
}
PSI_RET_t graph_t_getValue(graph_t* self){
    return NO_ERROR;
}
PSI_RET_t graph_t_setValue(graph_t* self){
    return NO_ERROR;
}
PSI_RET_t graph_t_addValue(graph_t* self){
    return NO_ERROR;
}
PSI_RET_t graph_t_delValue(graph_t* self){
    return NO_ERROR;
}
PSI_RET_t graph_t_exchangeValue(graph_t* self){
    return NO_ERROR;
}
#endif