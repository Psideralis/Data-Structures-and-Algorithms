/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Set.hpp
Description: A set is a grouping of numeric
elements or sets. It is not natively ordered
and it have no repeated elements. 

There is an OrderedSet in Psideralis math
utilities if needed. For repeated elements
see Tuple or ArrayList.

********************************************* */ 

/* *********************************************
DEFINES:
	SET_HPP
MACROS:

STRUCTS:
	set.h
ENUMS:

TYPES:
	Set
OPERATORS:
	+
	=
	*
	/
METHODS:
	See PSICollection
********************************************* */ 

#include "Map.hpp"

class Set : public PSICollection{
	public:
		/* CONSTRUCTORS */
		Set(){};
		int intType(int i);
		double doubleType(double d);
		Set setType(Set s);
		template <typename T>
		void input(T in);
		template <typename T, typename... Args>
		void input(T t, Args... args_in) {
			input(in);
			input(args_in...);
		}
		template <typename T>
		Set(T in){
			input(in);
		};
		template <typename T, typename... Args>
		Set(T t, Args... args_in) {
			input(in);
			input(args_in...);
		};
		template<typename ... Args>   
		Set(Args... args_in){
			input(args_in);
		};
		~Set(){
			this->counter = 0;
			this->size = 0;
		};
		Set(const Set &cpy){
			this->counter = counter;
			this->entry = cpy.entry;
			this->size = cpy.size;
		};
		/* ATTRIBUTES */
		Map entry;
		int size;
		int counter;
		/* METHODS */
		// GETTER
		template<class T> T get_Item(size_t pos) {}
		// SETTER
		template<typename T> void set_Item(size_t pos, T Item) { }
		/* OPERATORS */	
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
		ArrayList& operator==(const ArrayList &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator=(const ArrayList &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator=(const ArrayList* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator+(const ArrayList &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator+(const ArrayList* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator-(const ArrayList &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator-(const ArrayList* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator*(const int &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator*(const int* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator*(const ArrayList &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator*(const ArrayList* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator/(const int &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator/(const int* &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator/(const ArrayList &rhs){};
		/*
		Name:	
		Description:
		Input:
		Output:
		Example:
		*/
		ArrayList& operator/(const ArrayList* &rhs){};
		/* ALGORITHMS */
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
};

template<> void Set::input(int i){ Set::intType(i); }
template<> void Set::input(double d){ Set::doubleType(d); }
template<> void Set::input(Set s){ Set::setType(s); }
template<> void Set::set_Item(size_t pos, long Item) {}
template<> void Set::set_Item(size_t pos, int Item) {}
template<> long Set::get_Item(size_t pos) {}
template<> std::string Set::get_Item(size_t pos) {}
		
#endif