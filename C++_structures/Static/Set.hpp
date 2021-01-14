/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Set.hpp
Description: A set is a grouping of elements
of the same type, especialized for numbers.
********************************************* */ 

/* *********************************************
DEFINES:
	SET_HPP
	STD
MACROS:

STRUCTS:

ENUMS:

TYPES:

CLASSES:
	Set
********************************************* */ 

#ifndef SET_HPP
#define SET_HPP

#ifndef STD
#define STD
    #include "stdlib.h"
    #include "stdio.h"
    #include "string"
	#include <iostream>
    using namespace std;
#endif

template <typename T>
class Set {
	public:
		/* CONSTRUCTORES */
		Set(int size, int dim){
			if (dim != 1){
			T** N;
			N = new T[dim];
			this->entry = N[0];
			for(int i = 0; i < dim ;i++){
				N[i] = N[i+1];
			}
			for(int i = dim; i < 0 ;i--){
				N[i] = T()[size];
			}
			}else{
				this->entry = new T[size];
				for(int i = 0; i<size ;i++){
				this->entry[i] = 0;
				}
			}
		};
		~Set(){
			this->entry = NULL;
		};
		Set(const Set &cpy){
			this->entry = cpy.entry;
			this->size = cpy.size;
		};
		/* ATRIBUTOS */
		T* entry;
		int size;
		int dim;	
		/* MÉTODOS */
		/* NON MUTATIVE */
		void search();
		void selection();
		/* MUTATIVE */
		void addition();
		void substitution();
		void classification();
		/* TRANSMUTATIVE */
		void combinatorics();
	private:
	protected:
};
#endif

