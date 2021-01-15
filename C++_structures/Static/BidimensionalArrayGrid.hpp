/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: 2DGrid.hpp
Description: A 2DGrid is a grouping of elements
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
	SET_HPP
	STD
MACROS:

STRUCTS:

ENUMS:

TYPES:

CLASSES:
	Set<T>
********************************************* */ 

#ifndef GRID2D_HPP
#define GRID2D_HPP

#include "../Static/Element.hpp"

#ifndef STD
#define STD
    #include "stdlib.h"
    #include "stdio.h"
    #include "string"
	#include <iostream>
    using namespace std;
#endif

template <typename T>
class Grid2D {
	public:
		/* CONSTRUCTORES */
		Grid2D(int size, T set){
            this->entry = new T*[size];
            for (int i = 0; i < size ; i++){
                this->entry[i] = new T[size]; 
            }
            for (int i = 0; i < size ; i++){
                for (int j = 0; j < size ; j++){
                    this->entry[i][j] = set;
                }
            }
        };
		~Grid2D(){
		};
		Grid2D(const Grid2D &cpy){
		};
		/* ATRIBUTOS */
		T* entry;
		int size;	
		/* MÉTODOS */
			/* NON MUTATIVE */
				/* SEARCH */
		void generalSearch();
		void localSearch();
		void generalGroupedSearch();
		void localGroupedSearch();
		void MaxSearch();
		void MinSearch();
		void localMaxSearch();
		void localMinSearch();
		void nMaxSearch();
		void nMINearch();
				/* SELECTION */
		void indexedSelection();
		void randomSelection();
		void indexedGroupedSelection();
		void randomGroupedSelection();
			/* MUTATIVE */
				/* ADDITION */
		void insert();
		void remove();
		void groupedInsert();
		void groupedRemove();
				/* SUBSTITUTION */
		void indexedSubstitution();
		void randomSubstitution();
		void indexedGroupedSubstitution();
		void randomGroupedSubstitution();
				/* CLASSIFICATION */
		void randomSorting();
		void ascendentSorting();
		void descendentSorting();
		void localAscendentSorting();
		void localDescendentSorting();
		void indexedGroupingSorting();
		void splittedGroupingSorting();
		void joinedGroupingSorting();
			/* TRANSMUTATIVE */
				/* COMBINATORICS */
		void generalCombination();
		void localCombination();
		void indexedGroupingCombination();
		void randomGroupingCombination();
		void generalOrderedList();
		void localOrderedList();
		void indexedGroupedOrderedList();
		void randomGroupedOrderedList();
		void generalPermuation();
		void localPermutation();
		void indexedGroupedPermuation();
		void randomGroupedPermutation();
	private:
	protected:
};
#endif