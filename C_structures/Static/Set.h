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
    BASICS
        zero_alloc
        null_init
        range_init
            int
            double
        init
            int
            double
            set_t
        new
            args_list
        dealloc
        del
    MISCELANEOUS
        empty
        set
        get
        resizeEmpty
        resizeZero
    ALGORITHMS
        INMUTATIVE:
            search
            selection
        MUTATIVE:
            setter
            addition or remove
            exchange
            substitution
            classification
        TRANSMUTATIVE:
            combinatorics
********************************************* */ 

#include "Map.h"

#ifndef SET_H
#define SET_H

typedef struct set_s{
    int size;
    map_t* entry;
    void* set_t_link;
}set_t;

/*
Name:	
Description:
Input:
Output:
Example:
*/
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

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET set_t_zero_alloc(set_t* self){
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

/*
Name:	
Description:
Input:
Output:
Example:
*/
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

/*
Name:	
Description:
Input:
Output:
Example:
*/
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

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET set_t_null_init(set_t* self, int size){ 
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
        if (self->entry->key == NULL || self->entry->value == NULL){
            return NULLPTR_ERROR;
        }
        for(int i =0 ; i < self->size; i++){
            self->entry->key[i] = i;
            self->entry->value[i] = (void*)0;
        }
        return NO_ERROR;
    }
}

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET set_t_rangeinit_Int(set_t* self, int size, int start, int end, int jump){ 
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
        if (self->entry->key == NULL || self->entry->value == NULL){
            return NULLPTR_ERROR;
        }
        for(int i =0 ; i < self->size; i++){
            self->entry->key[i] = i;
            self->entry->value[i] = (void*)0;
        }
        return NO_ERROR;
    }
}

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET set_t_rangeinit_Double(set_t* self, int size, double start, double end, double jump){ 
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
        if (self->entry->key == NULL || self->entry->value == NULL){
            return NULLPTR_ERROR;
        }
        for(int i =0 ; i < self->size; i++){
            self->entry->key[i] = i;
            self->entry->value[i] = (void*)0;
        }
        return NO_ERROR;
    }
}

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET set_t_init_IntArray(set_t* self, int size, int n[]){
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
            *((int*)(self->entry->value[i])) = n[i];
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
        if (self->entry->key == NULL || self->entry->value == NULL){
            return NULLPTR_ERROR;
        }
        for(int i =0 ; i < self->size; i++){
            self->entry->key[i] = i;
            *((int*)(self->entry->value[i])) = n[i];
        }
        return NO_ERROR;
    }
}


/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET set_t_init_DoubleArray(set_t* self, int size, double n[]){
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
            *((double*)(self->entry->value[i])) = n[i];
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
        if (self->entry->key == NULL || self->entry->value == NULL){
            return NULLPTR_ERROR;
        }
        for(int i =0 ; i < self->size; i++){
            self->entry->key[i] = i;
            *((double*)(self->entry->value[i])) = n[i];
        }
        return NO_ERROR;
    }
}


/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET set_t_init_SetArray(set_t* self, int size, set_t n[]){
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
            *((set_t*)(self->entry->value[i])) = n[i];
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
        if (self->entry->key == NULL || self->entry->value == NULL){
            return NULLPTR_ERROR;
        }
        for(int i =0 ; i < self->size; i++){
            self->entry->key[i] = i;
            *((set_t*)(self->entry->value[i])) = n[i];
        }
        return NO_ERROR;
    }
}

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET set_t_new(set_t* self,int size, const char* fmt, ...){
    va_list args;
    va_start(args, fmt);
    if(self->entry != NULL){
        self->size = size;
        set_t_emptySet(self);
        self->entry->key = (int *)realloc(self->entry->key, sizeof(int)*self->size);
        self->entry->value = (void **)realloc(self->entry->value, sizeof(void*)*self->size);
        if (self->entry->key == NULL || self->entry->value == NULL){
            return NULLPTR_ERROR;
        }
        int i = 0;
        while (*fmt != '\0') {
            self->entry->key[i] = i;
            if (*fmt == 'd') {
                int n = va_arg(args, int);
                *((int*)(self->entry->value[i])) = n;
            } else if (*fmt == 'f') {
                double n = va_arg(args, double);
                *((double*)(self->entry->value[i])) = n;
            }else if (*fmt == 'c') {
                return TYPE_ERROR;
            }else if (sizeof(*fmt) == sizeof(set_t)) {
                set_t n = va_arg(args, set_t);
                *((set_t*)(self->entry->value[i])) = n;
            }else{
                return TYPE_ERROR;
            }
            i++;
            ++fmt;
        }
        va_end(args);
        return NO_ERROR;
    }else {
        self->size = size;
        self->entry = (map_t *)malloc(sizeof(map_t));
        if (self->entry == NULL){
            return NULLPTR_ERROR;
        }
        self->entry->key = (int *)malloc(sizeof(int)*self->size);
        self->entry->value = (void **)malloc(sizeof(void*)*self->size);
        if (self->entry->key == NULL || self->entry->value == NULL){
            return NULLPTR_ERROR;
        }
        int i = 0;
        while (*fmt != '\0') {
            self->entry->key[i] = i;
            if (*fmt == 'd') {
                int n = va_arg(args, int);
                *((int*)(self->entry->value[i])) = n;
            } else if (*fmt == 'f') {
                double n = va_arg(args, double);
                *((double*)(self->entry->value[i])) = n;
            }else if (*fmt == 'c') {
                return TYPE_ERROR;
            }else if (sizeof(*fmt) == sizeof(set_t)) {
                set_t n = va_arg(args, set_t);
                *((set_t*)(self->entry->value[i])) = n;
            }else{
                return TYPE_ERROR;
            }
            i++;
            ++fmt;
        }
        va_end(args);
        return NO_ERROR;
    }
}

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET set_t_dealloc(set_t* self){
    free(self->entry->key);
    free(self->entry->value);
    free(self->entry);
    return NO_ERROR;
}

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET set_t_del(set_t* self){
    self->size = 0;
    set_t_emptySet(self);
    set_t_dealloc(self);
    self->entry->key = NULL;
    self->entry->value = NULL;
    self->entry = NULL;
    return NO_ERROR;
}

/*
Name:	
Description:
Input:
Output:
Example:
*/
int set_t_getSize(set_t self){
    return self.size;
}

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET set_t_setIntEntry(set_t self, int i, int entry){
    *((int*)(self.entry->value[i])) = entry;
    return NO_ERROR;
}

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET set_t_setDoubleEntry(set_t self, int i, double entry){
    *((double*)(self.entry->value[i])) = entry;
    return NO_ERROR;
}

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET set_t_setSet_tEntry(set_t self, int i, set_t entry){
    *((set_t*)(self.entry->value[i])) = entry;
    return NO_ERROR;
}

/*
Name:	
Description:
Input:
Output:
Example:
*/
set_t set_t_getSet(set_t self){
    return self;
}

/*
Name:	
Description:
Input:
Output:
Example:
*/
int set_t_getSize(set_t self){
    return self.size;
}

/*
Name:	
Description:
Input:
Output:
Example:
*/
int set_t_getIntEntry(set_t self, int i){
    if (sizeof(*((int*)(self.entry->value[i]))) == sizeof(int)){
    return *((int*)(self.entry->value[i]));
    }else{
        return CAST_ERROR;
    }
}

/*
Name:	
Description:
Input:
Output:
Example:
*/
double set_t_getDoubleEntry(set_t self, int i){
    if (sizeof(*((double*)(self.entry->value[i]))) == sizeof(double)){
    return *((double*)(self.entry->value[i]));
    }else{
        return (double)CAST_ERROR;
    }
}

/*
Name:	
Description:
Input:
Output:
Example:
*/
set_t set_t_getSet_tEntry(set_t self, int i){
    if (sizeof(*((set_t*)(self.entry->value[i]))) == sizeof(set_t)){
    return *((set_t*)(self.entry->value[i]));
    }else{
        return *((set_t*)CAST_ERROR);
    }
}

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_BOOL set_t_isEmpty(set_t self){
    if( self.size == 0 || self.entry == NULL ){
        return PSI_true;
    }else{
        return PSI_false;
    }
}

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET set_t_resizeZero(set_t* self, int size){
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

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET set_t_resizeEmpty(set_t* self, int size){
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

/*
Name:	
Description:
Input:
Output:
Example:
*/
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

/*
Name:	
Description:
Input:
Output:
Example:
*/
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

/*
Name:	
Description:
Input:
Output:
Example:
*/
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

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET set_t_addSetEntry(set_t* self, int i, set_t n){
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

/*
Name:	
Description:
Input:
Output:
Example:
*/
PSI_RET set_t_exchangeEntry(set_t* self, int i, int j){
    if(self->entry != NULL){
        return NO_ERROR;
    }else {
        return NULLPTR_ERROR;
    }
}

#endif