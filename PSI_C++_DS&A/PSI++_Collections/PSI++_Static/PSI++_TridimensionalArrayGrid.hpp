/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: TridimensionalArrayGrid.hpp
Description: 

********************************************* */ 

/* *********************************************
DEFINES:
	ArrayGrid3D_HPP
MACROS:

STRUCTS:
	ArrayGrid3D.h
ENUMS:

TYPES:
	ArrayGrid3D
OPERATORS:
	+
	=
	*
	/
METHODS:
	See PSICollection
********************************************* */ 

#include "PSI++_DataStructures.hpp"

class ArrayGrid3D : public PSICollection{
	public:
		/* CONSTRUCTORS */
		ArrayGrid3D(){};
		int intType(int i);
		double doubleType(double d);
		ArrayGrid3D ArrayGrid3DType(ArrayGrid3D s);
		template <typename T>
		PSI_RET_t input(T in);
		template <typename T, typename... Args>
		PSI_RET_t input(T t, Args... args_in) {
			input(in);
			input(args_in...);
		}
		template <typename T>
		ArrayGrid3D(T in){
			input(in);
		};
		template <typename T, typename... Args>
		ArrayGrid3D(T t, Args... args_in) {
			input(in);
			input(args_in...);
		};
		template<typename ... Args>   
		ArrayGrid3D(Args... args_in){
			input(args_in);
		};
		~ArrayGrid3D(){
			this->counter = 0;
			this->size = 0;
		};
		ArrayGrid3D(const ArrayGrid3D &cpy){
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
		// ArrayGrid3DTER
		template<typename T> PSI_RET_t ArrayGrid3D_Item(size_t pos, T Item) { }
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
};

template<> PSI_RET_t ArrayGrid3D::input(int i){ ArrayGrid3D::intType(i); }
template<> PSI_RET_t ArrayGrid3D::input(double d){ ArrayGrid3D::doubleType(d); }
template<> PSI_RET_t ArrayGrid3D::input(ArrayGrid3D s){ ArrayGrid3D::ArrayGrid3DType(s); }
template<> PSI_RET_t ArrayGrid3D::ArrayGrid3D_Item(size_t pos, long Item) {}
template<> PSI_RET_t ArrayGrid3D::ArrayGrid3D_Item(size_t pos, int Item) {}
template<> long ArrayGrid3D::get_Item(size_t pos) {}
template<> std::string ArrayGrid3D::get_Item(size_t pos) {}
		
#endif