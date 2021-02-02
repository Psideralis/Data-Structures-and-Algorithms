/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Set.h
Description: A set is a grouping of elements
of the same type, especialized for numbers but
a set can have any type as long as all its
elements are of the same type. It is not
natively ordered neither it has repeated
elements. For repeated elements see: ArrayList,
for ordered elementes see: OrderedList.
There is an OrderedSet in Psideralis math
utilities if needed.

A set can be made up of sets. So classes can
be made up of sets and a universe can be made
up of classes.
********************************************* */ 

/* *********************************************
DEFINES:
	SET_H
MACROS:

STRUCTS:

ENUMS:

TYPES:

********************************************* */ 

#ifndef SET_H
#define SET_H

typedef struct set_s{
    BitFlag_t isEmpty;
    int size;
    void** entry;
    PSI_RET (*new_set_t)(set_t*,int,void**);
    PSI_RET (*del_set_t)(set_t*);
    BitFlag_t (*isEmpty)(set_t);
    PSI_RET (*setSize)(set_t, int);
    PSI_RET (*setEntry)(set_t, void**);
    int (*getSize)(set_t);
    void** (*getEntry)(set_t);
}set_t;

PSI_RET new_set_s(set_t* self, int size, void** entry){
    self->size = size;
    void** entries[self->size];
    self->entry = entries;
    for (int i = 0; i < size; i++){
        self->entry[i] = entry[i];
    }
    return NO_ERROR;
}

PSI_RET del_set_s(set_t* self){
    self->size = 0;
    self->entry = PSI_null;
    return NO_ERROR;
}

BitFlag_t isEmpty(set_t self){
    return self.isEmpty;
}

PSI_RET setSize(set_t self, int size){
    self.size = size;
    return NO_ERROR;
}

PSI_RET setEntry(set_t self, void** entry){
    self.entry = entry;
    return NO_ERROR;
}

int getSize(set_t self){
    return self.size;
}

void** getEntry(set_t self){
    return self.entry;
}

#endif