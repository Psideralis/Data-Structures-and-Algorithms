/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: List.hpp
Description: A List is a grouping of Ts
of the same type, especialized for different 
types of Ts. It is a virtual class for it
can be implemented as an array or as a 
linked list.
********************************************* */ 

/* *********************************************
DEFINES:
	LIST_HPP
	STD
MACROS:

STRUCTS:

ENUMS:

TYPES:

CLASSES:
	Set
********************************************* */ 

#ifndef LIST_HPP
#define LIST_HPP

#ifndef STD
#define STD
    #include "stdlib.h"
    #include "stdio.h"
    #include "string"
	#include <iostream>
    using namespace std;
#endif

template  <typename T>
class List{
	public:
		/* CONSTRUCTORES */
		List(){

		};
		virtual ~List(){

		};
		List(const List &cpy){

		};
		/* MÉTODOS */
		/* VIRTUALES */
		virtual int counterList() = 0;
		virtual void emptyList() = 0;
		virtual void exchange(int pst_1, int pst_2) = 0;
		virtual void ListInsert(T elm, int pst) = 0;
		virtual void ListInsert(T elm) = 0;
		virtual void ListDelete(T elm ,int pst) = 0;
		virtual void ListDelete(T elm) = 0;
		virtual T get(int pst) = 0;
		virtual int find(T elm) = 0;
		virtual T next(int pst) = 0;  
		virtual T previous(int pst) = 0;
		virtual T myr() = 0;  
		virtual T min() = 0;
		virtual T rand() = 0;
		virtual T rand(int i, int j) = 0;
		virtual void printList() = 0;

		/* IMPLEMENTADOS */
		void mergeSort(List<int>* MyList){}
		void quickSort(List<int>* MyList){
			int j = 0, k = MyList->counterList();
			int pivot = MyList->get(MyList->counterList()/2);
			for (int i = 0; i < MyList->counterList(); i ++){
				if (MyList->get(i)< pivot){
					MyList->exchange(j,i);
					j+=1;
				}else{
					MyList->exchange(k,i);
					k -=1;
				}
			}
		}
		void selectionSort(List<int>* MyList){
			for (int i = 0 ; i < (MyList->counterList()-1); i++){
				int minor = MyList->get(i),min_index = i;
				for (int j = 0 ; j < (MyList->counterList()-1); j++){
					if ((MyList->get((MyList->counterList()-1)-j)) < MyList->get(i) ){
						minor = MyList->get((MyList->counterList()-1)-j);
						min_index = ((MyList->counterList()-1)-j);
					}
				}
				MyList->exchange(min_index, i);
			}	
		}
		bool linealSearch(List<int>* MyList, int i){
			for (int j = 0 ; j < MyList->counterList(); j++){
				if (MyList->get(j) == i ){
					return true;
				}
			}
		}
		bool binarySearch(List<int>* MyList, int i){
			int inferior = 0, superior = (MyList->counterList()-1);
			while (inferior <= superior){
				int middle = ((inferior-superior)/2);
				if (MyList->get(middle) < i){
					inferior = middle -1;
				}else if(MyList->get(middle) > i){
					superior = middle +1;
				}else {
					return true;
				}
			}
			return false;
		}
		int fibonacciNum(int k){
			if (k == 0 || k == 0){
				return 1;
			}else{
				fibonacciNum(fibonacciNum(k-1) + fibonacciNum(k+1));
			}
		}

		
		void fibonacciArray(int k){
		}
		void fibonacciSearch(List<int>* MyList, int i){

		}
	private:
	protected:
};
#endif 