/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: BidimesionalLinkedGrid.hpp
Description: A bidimensional linked grid is
a grid of elements of the same or different
type thath are linked in 4 grades of liberty
to a partner element.
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

#ifndef BIGRIDLINKED_HPP
#define BIGRIDLINKED_HPP

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
class BiGridLinked {
	public:
		/* CONSTRUCTORES */
		BiGridLinked(int size, T set){
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
		~BiGridLinked(){
		};
		BiGridLinked(const BiGridLinked &cpy){
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