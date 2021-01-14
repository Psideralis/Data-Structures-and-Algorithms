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

#ifndef DOUBLE_HPP
#define DOUBLE_HPP

template <typename T>
class DoublePosition{
	public:
	DoublePosition(){};
	~DoublePosition(){};
	DoublePosition(const DoublePosition &cpy){
		cpy->content = this->content;
		cpy->next = this->next;
		cpy->previous = this->previous;
	};
	T content;
	DoublePosition<T>* previous;
	DoublePosition<T>* next;
};
#endif