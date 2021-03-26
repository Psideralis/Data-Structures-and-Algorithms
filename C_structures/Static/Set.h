/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Set.h
Description: A set is a grouping of numeric
elements or sets. It is not natively ordered
and it have no repeated elements. 

There is an OrderedSet in Psideralis math
utilities if needed. For repeated elements
see Tuple or ArrayList.

PENDANT:
    NO REPEATED ELEMENT
    ONLY NUMERIC OR SET
********************************************* */ 

/* *********************************************
DEFINES:
	SET_H
MACROS:

STRUCTS:
    set_s
ENUMS:

TYPES:
    set_t
FUNCTIONS:
    INMUTATIVE:
        SEARCH
        SELECTION
    MUTATIVE:
        SETTER
        ADDITION OR REMOVE
        ECHANGE
        SUBSTITUTION
        CLASSIFICATION
    TRANSMUTATIVE:
        COMBINATORICS
OPERATORS:
********************************************* */ 

#include "../PsideralisDataStructures.h"
#include "Map.h"

#ifndef SET_H
#define SET_H

typedef struct set_s{
    int size;
    map_t* entry;
}set_t;

PSI_RET set_t_emptySet(set_t* self){
    if(self->entry != NULL){
        for(int i =0 ; i < self->size; i++){
            self->entry->key[i] = i;
            self->entry->value[i] = (void*)0;
        }
        return NO_ERROR;
    }else {
        return NULLPTR_ERROR;
    }
}

PSI_RET set_t_zeroalloc(set_t* self){
    if(self->entry != NULL){
        set_t_emptySet(self);
        self->entry->key = (int*) NULL;
        self->entry->value = (void**) NULL;
        return NO_ERROR;
    }else {
        self->size = 0;
        self->entry = (map_t*) NULL;
        return NO_ERROR;
    }
}

PSI_RET set_t_emptyKeys(set_t* self){
    if(self->entry != NULL){
        for(int i =0 ; i < self->size; i++){
            self->entry->key[i] = 0;
        }
        return NO_ERROR;
    }else {
        return NULLPTR_ERROR;
    }
}

PSI_RET set_t_emptyValues(set_t* self){
    if(self->entry != NULL){
        for(int i =0 ; i < self->size; i++){
            self->entry->value[i] = (void*)0;
        }
        return NO_ERROR;
    }else {
        return NULLPTR_ERROR;
    }
}

PSI_RET set_t_zeroinit(set_t* self, int size){ 
    if(self->entry != NULL){
        self->size = size;
        set_t_emptySet(self);
        self->entry->key = (int *)realloc(self->entry->key, sizeof(int)*self->size);
        self->entry->value = (void **)realloc(self->entry->value, sizeof(void*)*self->size);
        if (self->entry->key == NULL || self->entry->value == NULL){
            return NULLPTR_ERROR;
        }
        for(int i =0 ; i < self->size; i++){
            self->entry->key[i] = i;
            self->entry->value[i] = (void*)0;
        }
        return NO_ERROR;
    }else {
        self->size = size;
        self->entry = (map_t *)malloc(sizeof(map_t));
        if (self->entry == NULL){
            return NULLPTR_ERROR;
        }
        self->entry->key = (int *)malloc(sizeof(int)*self->size);
        self->entry->value = (void **)malloc(sizeof(void*)*self->size);
        for(int i =0 ; i < self->size; i++){
            self->entry->key[i] = i;
            self->entry->value[i] = (void*)0;
        }
        return NO_ERROR;
    }
}

PSI_RET set_t_initInt(set_t* self, int size, int n){
    if(self->entry != NULL){
        self->size = size;
        set_t_emptySet(self);
        self->entry->key = (int *)realloc(self->entry->key, sizeof(int)*self->size);
        self->entry->value = (void **)realloc(self->entry->value, sizeof(void*)*self->size);
        if (self->entry->key == NULL || self->entry->value == NULL){
            return NULLPTR_ERROR;
        }
        for(int i =0 ; i < self->size; i++){
            self->entry->key[i] = i;
            *((int*)(self->entry->value[i])) = n;
        }
        return NO_ERROR;
    }else {
        self->size = size;
        self->entry = (map_t *)malloc(sizeof(map_t));
        if (self->entry == NULL){
            return NULLPTR_ERROR;
        }
        self->entry->key = (int *)malloc(sizeof(int)*self->size);
        self->entry->value = (void **)malloc(sizeof(void*)*self->size);
        for(int i =0 ; i < self->size; i++){
            self->entry->key[i] = i;
            *((int*)(self->entry->value[i])) = n;
        }
        return NO_ERROR;
    }
}

PSI_RET set_t_initDouble(set_t* self, int size, double n){
    if(self->entry != NULL){
        self->size = size;
        set_t_emptySet(self);
        self->entry->key = (int *)realloc(self->entry->key, sizeof(int)*self->size);
        self->entry->value = (void **)realloc(self->entry->value, sizeof(void*)*self->size);
        if (self->entry->key == NULL || self->entry->value == NULL){
            return NULLPTR_ERROR;
        }
        for(int i =0 ; i < self->size; i++){
            self->entry->key[i] = i;
            *((double*)(self->entry->value[i])) = n;
        }
        return NO_ERROR;
    }else {
        self->size = size;
        self->entry = (map_t *)malloc(sizeof(map_t));
        if (self->entry == NULL){
            return NULLPTR_ERROR;
        }
        self->entry->key = (int *)malloc(sizeof(int)*self->size);
        self->entry->value = (void **)malloc(sizeof(void*)*self->size);
        for(int i =0 ; i < self->size; i++){
            self->entry->key[i] = i;
            *((double*)(self->entry->value[i])) = n;
        }
        return NO_ERROR;
    }
}

PSI_RET set_t_initSet_t(set_t* self, int size, set_t n){
    if(self->entry != NULL){
        self->size = size;
        set_t_emptySet(self);
        self->entry->key = (int *)realloc(self->entry->key, sizeof(int)*self->size);
        self->entry->value = (void **)realloc(self->entry->value, sizeof(void*)*self->size);
        if (self->entry->key == NULL || self->entry->value == NULL){
            return NULLPTR_ERROR;
        }
        for(int i =0 ; i < self->size; i++){
            self->entry->key[i] = i;
            *((set_t*)(self->entry->value[i])) = n;
        }
        return NO_ERROR;
    }else {
        self->size = size;
        self->entry = (map_t *)malloc(sizeof(map_t));
        if (self->entry == NULL){
            return NULLPTR_ERROR;
        }
        self->entry->key = (int *)malloc(sizeof(int)*self->size);
        self->entry->value = (void **)malloc(sizeof(void*)*self->size);
        for(int i =0 ; i < self->size; i++){
            self->entry->key[i] = i;
            *((set_t*)(self->entry->value[i])) = n;
        }
        return NO_ERROR;
    }
}

PSI_RET set_t_new(set_t* self, int size, set_t set[]){
    if(self->entry != NULL){
        self->size = size;
        set_t_emptySet(self);
        self->entry->key = (int *)realloc(self->entry->key, sizeof(int)*self->size);
        self->entry->value = (void **)realloc(self->entry->value, sizeof(void*)*self->size);
        if (self->entry->key == NULL || self->entry->value == NULL){
            return NULLPTR_ERROR;
        }
        for(int i =0 ; i < self->size; i++){
            self->entry->key[i] = i;
            *((set_t*)(self->entry->value[i])) = set[i];
        }
        return NO_ERROR;
    }else {
        self->size = size;
        self->entry = (map_t *)malloc(sizeof(map_t));
        if (self->entry == NULL){
            return NULLPTR_ERROR;
        }
        self->entry->key = (int *)malloc(sizeof(int)*self->size);
        self->entry->value = (void **)malloc(sizeof(void*)*self->size);
        for(int i =0 ; i < self->size; i++){
            self->entry->key[i] = i;
            *((set_t*)(self->entry->value[i])) = set[i];
        }
        return NO_ERROR;
    }
}

PSI_RET set_t_del(set_t* self){
    self->size = 0;
    free(self->entry->key);
    free(self->entry->value);
    free(self->entry);
    self->entry->key = NULL;
    self->entry->value = NULL;
    self->entry = NULL;
    return NO_ERROR;
}
PSI_RET set_t_setSize(set_t* self, int size){
    int tempSize = self->size;
    self->size = size;
    if(self->entry != NULL){
        map_t* temp = self->entry;
        set_t_emptySet(self);
        self->entry->key = (int *)realloc(self->entry->key, sizeof(int)*self->size);
        self->entry->value = (void **)realloc(self->entry->value, sizeof(void*)*self->size);
        if (self->entry->key == NULL || self->entry->value == NULL){
            return NULLPTR_ERROR;
        }
        for(int i =0 ; i < self->size; i++){
            if (i < tempSize ){
                self->entry->key[i] = i;
                self->entry->value[i] = temp->value[i];
            }else{
                self->entry->key[i] = i;
                self->entry->value[i] = (void*)0;
            }
        }
        return NO_ERROR;
    }else {
        return NULLPTR_ERROR;
    }
    return NO_ERROR;
}
PSI_RET set_t_setIntEntry(set_t self, int i, int entry){
    *((int*)(self.entry->value[i])) = entry;
    return NO_ERROR;
}

PSI_RET set_t_setDoubleEntry(set_t self, int i, double entry){
    *((double*)(self.entry->value[i])) = entry;
    return NO_ERROR;
}

PSI_RET set_t_setSet_tEntry(set_t self, int i, set_t entry){
    *((set_t*)(self.entry->value[i])) = entry;
    return NO_ERROR;
}

set_t set_t_getSet(set_t self){
    return self;
}

int set_t_getSize(set_t self){
    return self.size;
}

int set_t_getIntEntry(set_t self, int i){
    if (sizeof(*((int*)(self.entry->value[i]))) == sizeof(int)){
    return *((int*)(self.entry->value[i]));
    }else{
        return CAST_ERROR;
    }
}

double set_t_getDoubleEntry(set_t self, int i){
    if (sizeof(*((double*)(self.entry->value[i]))) == sizeof(double)){
    return *((double*)(self.entry->value[i]));
    }else{
        return (double)CAST_ERROR;
    }
}

set_t set_t_getSet_tEntry(set_t self, int i){
    if (sizeof(*((set_t*)(self.entry->value[i]))) == sizeof(set_t)){
    return *((set_t*)(self.entry->value[i]));
    }else{
        return *((set_t*)CAST_ERROR);
    }
}

PSI_BOOL set_t_isEmpty(set_t self){
    if( self.size == 0 || self.entry == NULL ){
        return PSI_true;
    }else{
        return PSI_false;
    }
}

PSI_RET set_t_resizeEmptySet(set_t* self, int size){
    if(self->entry != NULL){
        set_t_emptySet(self);
        self->size = size;
        self->entry->key = (int *)realloc(self->entry->key, sizeof(int)*self->size);
        self->entry->value = (void **)realloc(self->entry->value, sizeof(void*)*self->size);
        if (self->entry->key == NULL || self->entry->value == NULL){
            return NULLPTR_ERROR;
        }
        for(int i =0 ; i < self->size; i++){
            self->entry->key[i] = i;
            self->entry->value[i] = (void*)0;
        }
        return NO_ERROR;
    }else {
        return NULLPTR_ERROR;
    }
}

PSI_RET set_t_removeEntry(set_t* self, int i){
    if(self->entry != NULL){
        map_t* temp = self->entry;
        set_t_emptySet(self);
        self->size = self->size-1;
        self->entry->key = (int *)realloc(self->entry->key, sizeof(int)*self->size);
        self->entry->value = (void **)realloc(self->entry->value, sizeof(void*)*self->size);
        if (self->entry->key == NULL || self->entry->value == NULL){
            return NULLPTR_ERROR;
        }
        int k = 0;
        for(int j =0 ; j < self->size+1; j++){
            if (j == i){
                k = k;
            }else{
                self->entry->key[k] = k;
                self->entry->value[k] = temp->value[k];
                k += 1;
            }
        }
        return NO_ERROR;
    }else {
        return NULLPTR_ERROR;
    }
}
PSI_RET set_t_addIntEntry(set_t* self, int i, int n){
    if(self->entry != NULL){
        map_t* temp = self->entry;
        set_t_emptySet(self);
        self->size = self->size+1;
        self->entry->key = (int *)realloc(self->entry->key, sizeof(int)*self->size);
        self->entry->value = (void **)realloc(self->entry->value, sizeof(void*)*self->size);
        if (self->entry->key == NULL || self->entry->value == NULL){
            return NULLPTR_ERROR;
        }
        int k = 0;
        for(int j =0 ; j < self->size; j++){
            if (j == i){
                self->entry->key[j] = j;
                *((int*)(self->entry->value[j])) = n;
            }else{
                self->entry->key[j] = j;
                self->entry->value[j] = temp->value[k]; 
                k += 1;
            }
        }
        return NO_ERROR;
    }else {
        return NULLPTR_ERROR;
    }
}

PSI_RET set_t_addDoubleEntry(set_t* self, int i, double n){
    if(self->entry != NULL){
        map_t* temp = self->entry;
        set_t_emptySet(self);
        self->size = self->size+1;
        self->entry->key = (int *)realloc(self->entry->key, sizeof(int)*self->size);
        self->entry->value = (void **)realloc(self->entry->value, sizeof(void*)*self->size);
        if (self->entry->key == NULL || self->entry->value == NULL){
            return NULLPTR_ERROR;
        }
        int k = 0;
        for(int j =0 ; j < self->size; j++){
            if (j == i){
                self->entry->key[j] = j;
                *((double*)(self->entry->value[j])) = n;
            }else{
                self->entry->key[j] = j;
                self->entry->value[j] = temp->value[k]; 
                k += 1;
            }
        }
        return NO_ERROR;
    }else {
        return NULLPTR_ERROR;
    }
}

PSI_RET set_t_addSet_tEntry(set_t* self, int i, set_t n){
    if(self->entry != NULL){
        map_t* temp = self->entry;
        set_t_emptySet(self);
        self->size = self->size+1;
        self->entry->key = (int *)realloc(self->entry->key, sizeof(int)*self->size);
        self->entry->value = (void **)realloc(self->entry->value, sizeof(void*)*self->size);
        if (self->entry->key == NULL || self->entry->value == NULL){
            return NULLPTR_ERROR;
        }
        int k = 0;
        for(int j =0 ; j < self->size; j++){
            if (j == i){
                self->entry->key[j] = j;
                *((set_t*)(self->entry->value[j])) = n;
            }else{
                self->entry->key[j] = j;
                self->entry->value[j] = temp->value[k]; 
                k += 1;
            }
        }
        return NO_ERROR;
    }else {
        return NULLPTR_ERROR;
    }
}

PSI_RET set_t_exchangeEntry(set_t* self, int i, int j){
    if(self->entry != NULL){
        return NO_ERROR;
    }else {
        return NULLPTR_ERROR;
    }
}

#endif