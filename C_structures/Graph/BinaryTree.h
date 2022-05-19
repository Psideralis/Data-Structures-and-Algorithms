/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: BinaryTree.hpp
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 
#ifndef BINARYTREE_C
#define BINARYTREE_C

typedef struct BinaryTree_s{
    void* item;
} binaryTree_t;

PSI_RET_t binaryTree_t_zinit(binaryTree_t* self){
    return NO_ERROR;
}
PSI_RET_t binaryTree_t_init(binaryTree_t* self){
    return NO_ERROR;
}
PSI_RET_t binaryTree_t_new(binaryTree_t* self){
    return NO_ERROR;
}
PSI_RET_t binaryTree_t_del(binaryTree_t* self){
    return NO_ERROR;
}
PSI_RET_t binaryTree_t_get(binaryTree_t* self){
    return NO_ERROR;
}
PSI_RET_t binaryTree_t_emptyTable(binaryTree_t* self){
    return NO_ERROR;
}
PSI_RET_t binaryTree_t_resizeEmptyTable(binaryTree_t* self){
    return NO_ERROR;
}
PSI_RET_t binaryTree_t_isempty(binaryTree_t* self){
    return NO_ERROR;
}
PSI_RET_t binaryTree_t_getSize(binaryTree_t* self){
    return NO_ERROR;
}
PSI_RET_t binaryTree_t_setSize(binaryTree_t* self){
    return NO_ERROR;
}
PSI_RET_t binaryTree_t_getKey(binaryTree_t* self){
    return NO_ERROR;
}
PSI_RET_t binaryTree_t_setKey(binaryTree_t* self){
    return NO_ERROR;
}
PSI_RET_t binaryTree_t_addKey(binaryTree_t* self){
    return NO_ERROR;
}
PSI_RET_t binaryTree_t_delKey(binaryTree_t* self){
    return NO_ERROR;
}
PSI_RET_t binaryTree_t_getValue(binaryTree_t* self){
    return NO_ERROR;
}
PSI_RET_t binaryTree_t_setValue(binaryTree_t* self){
    return NO_ERROR;
}
PSI_RET_t binaryTree_t_addValue(binaryTree_t* self){
    return NO_ERROR;
}
PSI_RET_t binaryTree_t_delValue(binaryTree_t* self){
    return NO_ERROR;
}
PSI_RET_t binaryTree_t_exchangeValue(binaryTree_t* self){
    return NO_ERROR;
}
#endif