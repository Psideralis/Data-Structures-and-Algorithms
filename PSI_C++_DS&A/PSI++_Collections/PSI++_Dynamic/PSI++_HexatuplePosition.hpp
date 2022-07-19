/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: ArrayList.hpp
Description: An Arraylist is an implementation
of a List by means of an array.
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

CLASSES:

********************************************* */ 
#include "PSI++_DataStructures.hpp"
#ifndef SINGLE_HPP
#define SINGLE_HPP
template <typename T>
class SinglePosition{
	public:
	SinglePosition(){};
	SinglePosition(T n){
		this->content = n;
		this->next = NULL;
	};
	~SinglePosition(){};
	SinglePosition(const SinglePosition &cpy){
		cpy->content = this->content;
		cpy->next = this->next;
	};
	T content;
	SinglePosition<T>* next;
};
#endif

