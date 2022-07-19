/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: 2DGrid.hpp
Description: A 2DGrid is a grouping of elements
of the same type, especialized for numbers but
a set can have any type as long as all its
elements are of the same type. It is not
natively ordered neither it has repeated
elements. For repeated elements see: Grid2D,
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

#include "PSI++_DataStructures.hpp"

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
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Element& operator[](const int index){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Grid2D& operator==(const Grid2D &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Grid2D& operator=(const Grid2D &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Grid2D& operator=(const Grid2D* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Grid2D& operator+(const Grid2D &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Grid2D& operator+(const Grid2D* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Grid2D& operator-(const Grid2D &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Grid2D& operator-(const Grid2D* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Grid2D& operator*(const int &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Grid2D& operator*(const int* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Grid2D& operator*(const Grid2D &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Grid2D& operator*(const Grid2D* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Grid2D& operator/(const int &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Grid2D& operator/(const int* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Grid2D& operator/(const Grid2D &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Grid2D& operator/(const Grid2D* &rhs){};
		/* ALGORITHMS */
			/* NON MUTATIVE */
				/* SEARCH */
		PSI_RET_t generalSearch();
		PSI_RET_t localSearch();
		PSI_RET_t generalGroupedSearch();
		PSI_RET_t localGroupedSearch();
		PSI_RET_t MaxSearch();
		PSI_RET_t MinSearch();
		PSI_RET_t localMaxSearch();
		PSI_RET_t localMinSearch();
		PSI_RET_t nMaxSearch();
		PSI_RET_t nMINearch();
				/* SELECTION */
		PSI_RET_t indexedSelection();
		PSI_RET_t randomSelection();
		PSI_RET_t indexedGroupedSelection();
		PSI_RET_t randomGroupedSelection();
			/* MUTATIVE */
				/* ADDITION */
		PSI_RET_t insert();
		PSI_RET_t remove();
		PSI_RET_t groupedInsert();
		PSI_RET_t groupedRemove();
				/* SUBSTITUTION */
		PSI_RET_t indexedSubstitution();
		PSI_RET_t randomSubstitution();
		PSI_RET_t indexedGroupedSubstitution();
		PSI_RET_t randomGroupedSubstitution();
				/* CLASSIFICATION */
		PSI_RET_t randomSorting();
		PSI_RET_t ascendentSorting();
		PSI_RET_t descendentSorting();
		PSI_RET_t localAscendentSorting();
		PSI_RET_t localDescendentSorting();
		PSI_RET_t indexedGroupingSorting();
		PSI_RET_t splittedGroupingSorting();
		PSI_RET_t joinedGroupingSorting();
			/* TRANSMUTATIVE */
				/* COMBINATORICS */
		PSI_RET_t generalCombination();
		PSI_RET_t localCombination();
		PSI_RET_t indexedGroupingCombination();
		PSI_RET_t randomGroupingCombination();
		PSI_RET_t generalOrderedList();
		PSI_RET_t localOrderedList();
		PSI_RET_t indexedGroupedOrderedList();
		PSI_RET_t randomGroupedOrderedList();
		PSI_RET_t generalPermuation();
		PSI_RET_t localPermutation();
		PSI_RET_t indexedGroupedPermuation();
		PSI_RET_t randomGroupedPermutation();
	private:
	protected:
};

class Grid2D {
	public:
		/* CONSTRUCTORES */
		MGrid2D(int size, PSI_RET_t* set){
            this->entry = new Element*[size];
            for (int i = 0; i < size ; i++){
                this->entry[i] = new Element[size]; 
            }
            for (int i = 0; i < size ; i++){
                for (int j = 0; j < size ; j++){
                    this->entry[i][j].item = &set;
                }
            }
        };
		~MGrid2D(){
		};
		MGrid2D(const MGrid2D &cpy){
		};
		/* ATRIBUTOS */
		Element** entry;
		int size;	
		/* MÉTODOS */
			/* NON MUTATIVE */
				/* SEARCH */
		PSI_RET_t generalSearch();
		PSI_RET_t localSearch();
		PSI_RET_t generalGroupedSearch();
		PSI_RET_t localGroupedSearch();
		PSI_RET_t MaxSearch();
		PSI_RET_t MinSearch();
		PSI_RET_t localMaxSearch();
		PSI_RET_t localMinSearch();
		PSI_RET_t nMaxSearch();
		PSI_RET_t nMINearch();
				/* SELECTION */
		PSI_RET_t indexedSelection();
		PSI_RET_t randomSelection();
		PSI_RET_t indexedGroupedSelection();
		PSI_RET_t randomGroupedSelection();
			/* MUTATIVE */
				/* ADDITION */
		PSI_RET_t insert();
		PSI_RET_t remove();
		PSI_RET_t groupedInsert();
		PSI_RET_t groupedRemove();
				/* SUBSTITUTION */
		PSI_RET_t indexedSubstitution();
		PSI_RET_t randomSubstitution();
		PSI_RET_t indexedGroupedSubstitution();
		PSI_RET_t randomGroupedSubstitution();
				/* CLASSIFICATION */
		PSI_RET_t randomSorting();
		PSI_RET_t ascendentSorting();
		PSI_RET_t descendentSorting();
		PSI_RET_t localAscendentSorting();
		PSI_RET_t localDescendentSorting();
		PSI_RET_t indexedGroupingSorting();
		PSI_RET_t splittedGroupingSorting();
		PSI_RET_t joinedGroupingSorting();
			/* TRANSMUTATIVE */
				/* COMBINATORICS */
		PSI_RET_t generalCombination();
		PSI_RET_t localCombination();
		PSI_RET_t indexedGroupingCombination();
		PSI_RET_t randomGroupingCombination();
		PSI_RET_t generalOrderedList();
		PSI_RET_t localOrderedList();
		PSI_RET_t indexedGroupedOrderedList();
		PSI_RET_t randomGroupedOrderedList();
		PSI_RET_t generalPermuation();
		PSI_RET_t localPermutation();
		PSI_RET_t indexedGroupedPermuation();
		PSI_RET_t randomGroupedPermutation();
	private:
	protected:
};
#endif