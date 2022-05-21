/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Set.hpp
Description: A set is a grouping of numeric
elements or sets. It is not natively ordered
and it have no repeated elements. 

There is an OrderedSet in Psideralis math
utilities if needed. For repeated elements
see Tuple or Map.

********************************************* */ 

/* *********************************************
DEFINES:
	MAP_HPP
MACROS:

STRUCTS:

ENUMS:

TYPES:

CLASSES:
	Map
********************************************* */ 

#include <stdio.h>
#include <stdarg.h>
#include <initializer_list>

#ifndef MAP_HPP
#define MAP_HPP

template<typename T>
class TMap{
};

class Map{
    public:
    /* CONSTRUCTORS */
    Map(...){};
    template<typename ... Args>
    Map(std::initializer_list<Args ...>){};
    Map(int key_size, PSI_RET_t* values){
        this->key_size = key_size;
        this->key = new int[this->key_size];
        this->value = new PSI_RET_t*[this->key_size];
    };
    ~Map(){};
    template<typename ... Args>
    Map&  operator =(const std::initializer_list<Args ...>){
        return *this;
    };
    template<typename ... Args>
    Map&  operator [](const std::initializer_list<Args ...>){
        return *this;
    };
    template<typename ... Args>
    Map&  operator [](const Args ...){
        return *this;
    };
    int  operator [](const int args[]){
        return 0;
    };
    Map operator [](const Map*){
        return this;
    };
    Map operator [](const Map){
        return this;
    };
    /*
    PSI_RET_t* operator new(size_t size){
        return NULL;
    };
    PSI_RET_t  operator delete(PSI_RET_t*){
    };
    PSI_RET_t* operator new[](size_t count ){
        return NULL;
    };
    */
    /* ATRIBUTES */
    unsigned int key_size;
    int* key;
    PSI_RET_t* value;
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
		Map& operator==(const Map &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Map& operator=(const Map &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Map& operator=(const Map* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Map& operator+(const Map &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Map& operator+(const Map* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Map& operator-(const Map &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Map& operator-(const Map* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Map& operator*(const int &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Map& operator*(const int* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Map& operator*(const Map &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Map& operator*(const Map* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Map& operator/(const int &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Map& operator/(const int* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Map& operator/(const Map &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		Map& operator/(const Map* &rhs){};
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

#endif