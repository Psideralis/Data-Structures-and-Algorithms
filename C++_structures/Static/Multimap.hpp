/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: ArrayList.hpp
Description: An Multimap is a not one to one 
mapping. It maps multiple keys to multiple 
values.
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

CLASSES:

********************************************* */ 


#ifndef MULTIMAP_HPP
#define MULTIMAP_HPP

#ifndef STD
#define STD
    #include "stdlib.h"
    #include "stdio.h"
    #include "string"
	#include <iostream>
    using namespace std;
#endif

template <typename T>
class Multimap {
	public:
		/* CONSTRUCTORES */
        Multimap(){};
        ~Multimap(){};
		Multimap(const Multimap &cpy){};
		/* ATRIBUTOS */

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