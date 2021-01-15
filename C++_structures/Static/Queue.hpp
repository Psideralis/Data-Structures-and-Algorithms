/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: ArrayList.hpp
Description: A queue is a sequence of elements
that can interact as FIFO, FILO, LILO, LIFO.
Their elements are of the same type, for mixed
typed see MixedQueue.
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

CLASSES:

********************************************* */ 


#ifndef QUEUE_HPP
#define QUEUE_HPP

#ifndef STD
#define STD
    #include "stdlib.h"
    #include "stdio.h"
    #include "string"
	#include <iostream>
    using namespace std;
#endif

template <typename T>
class Queue {
	public:
		/* CONSTRUCTORES */
		Queue(){};
		~Queue(){};
		Queue(const Queue &cpy){};
		/* ATRIBUTOS */
		int mode;
		T* queue;
		/* MÉTODOS */
			/* SPECIAL*/
		void in();
		void out();
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