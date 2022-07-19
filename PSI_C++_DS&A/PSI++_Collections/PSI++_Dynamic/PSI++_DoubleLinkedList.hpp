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






#ifndef DOUBLELIST_HPP
#define DOUBLELIST_HPP

#include "DoublePosition.hpp"

template <typename T>
class DoubleLinkedList {
	public:
	/* CONSTRUCTORES */
	DoubleLinkedList(){};
	~DoubleLinkedList(){};
	DoubleLinkedList(const DoubleLinkedList &cpy){};
	/* ATRIBUTOS */
	DoublePosition<T>* content;

	/* MÉTODOS */


	private:
	protected:
};

#endif