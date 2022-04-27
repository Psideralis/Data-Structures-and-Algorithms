/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: ArrayList.h
Description: An array list is a grouping of the
same type. It is not natively ordered and do 
not have repeated elements.
********************************************* */ 


/* *********************************************
INCLUDES:

MACROS:
	ARRAYLITS_H
STRUCTS:
    arrayList_s
ENUMS:

TYPES:
    arrayList_t
FUNCTIONS:
    BASICS
        zeroalloc
        zeroinit
        rangeinit
            int
            double
        init
            int
            double
            set_t
        new
            args_list
            set_array
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

#ifndef ARRAYLIST_H
#define ARRAYLIST_H

typedef struct arrayElement_s{
    unsigned int item_size;
    void* item;
    void* arrayElement_t_link;
}arrayElement_t;

typedef struct arrayList_s{
    unsigned int arrayList_size;
    arrayElement_t* entry;
    void* arrayList_t_link;
}arrayList_t;

PSI_RET arrayList_t_new(arrayList_t* self, int size, element_t* entry){
    if(self->entry != NULL){
        self->size = size;
        self->entry = (element_t *)realloc(self->entry,sizeof(element_t)*self->size);
        if (self->entry == NULL){
            return NULLPTR_ERROR;
        }
        for(int i =0 ; i < self->size; i++){
            self->entry[i].item = entry;
        }
        return NO_ERROR;
    }else {
        self->size = size;
        self->entry = (element_t *)malloc(sizeof(element_t)*self->size);
        if (self->entry == NULL){
            return NULLPTR_ERROR;
        }
        for(int i =0 ; i < self->size; i++){
            self->entry[i].item = entry;
        }
        return NO_ERROR;
    }
}

PSI_RET arrayList_t_init(arrayList_t* self, int size, void* entry){
    if(self->entry != NULL){
        self->size = size;
        self->entry = (element_t *)realloc(self->entry,sizeof(element_t)*self->size);
        if (self->entry == NULL){
            return NULLPTR_ERROR;
        }
        for(int i =0 ; i < self->size; i++){
            self->entry[i].item = entry;
        }
        return NO_ERROR;
    }else {
        self->size = size;
        self->entry = (element_t *)malloc(sizeof(element_t)*self->size);
        if (self->entry == NULL){
            return NULLPTR_ERROR;
        }
        for(int i =0 ; i < self->size; i++){
            self->entry[i].item = entry;
        }
        return NO_ERROR;
    }
}

PSI_RET arrayList_t_zinit(arrayList_t* self, int size){
    if(self->entry != NULL){
        self->size = size;
        self->entry = (element_t *)realloc(self->entry,sizeof(element_t)*self->size);
        if (self->entry == NULL){
            return NULLPTR_ERROR;
        }
        for(int i =0 ; i < self->size; i++){
            self->entry[i].item = ((void*)0);
        }
        return NO_ERROR;
    }else {
        self->size = size;
        self->entry = (element_t *)malloc(sizeof(element_t)*self->size);
        if (self->entry == NULL){
            return NULLPTR_ERROR;
        }
        for(int i =0 ; i < self->size; i++){
            self->entry[i].item = ((void*)0);
        }
        return NO_ERROR;
    }
}
  
PSI_RET arrayList_t_del(arrayList_t* self){
    self->size = 0;
    free(self);
}

PSI_RET_t arrayList_t_set_voidptr(arrayList_t* self, int i, void* value){
    self->entry[i].item = value;
};

PSI_RET_t arrayList_t_set_char(arrayList_t* self, int i, char value){
    self->entry[i].item = (void*)&value;
};

PSI_RET_t arrayList_t_set_string(arrayList_t* self, int i, PSI_string value){
    self->entry[i].item = (void*)&value;
};

PSI_RET_t arrayList_t_set_chord(arrayList_t* self, int i, PSI_chord value){
    self->entry[i].item = (void*)&value;
};

PSI_RET_t arrayList_t_set_int(arrayList_t* self, int i, int value){
    self->entry[i].item = (void*)&value;
};

PSI_RET_t arrayList_t_set_double(arrayList_t* self, int i, double value){
    self->entry[i].item = (void*)&value;
};


#endif