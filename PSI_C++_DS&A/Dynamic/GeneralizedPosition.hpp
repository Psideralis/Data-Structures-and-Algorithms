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

#ifndef GENERALIZED_HPP
#define GENERALIZED_HPP

template <typename T>
class GeneralizedPosition{
	public:
	GeneralizedPosition(){};
	~GeneralizedPosition(){};
	GeneralizedPosition(const GeneralizedPosition &cpy){
		cpy->content = this->content;
		cpy->next = this->next;
		cpy->previous = this->previous;
	};
	T content;
	GeneralizedPosition<T>** previousSequence;
	GeneralizedPosition<T>** nextSequence;
};

#endif