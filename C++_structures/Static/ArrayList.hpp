/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: ArrayList.hpp
Description: An Arraylist is an implementation
of a List by means of an array.
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

CLASSES:

********************************************* */ 

#ifndef ARRAYLIST_HPP
#define ARRAYLIST_HPP

#include "List.hpp"

#ifndef STD
#define STD
    #include "stdlib.h"
    #include "stdio.h"
    #include "string"
	#include <iostream>
    using namespace std;
#endif

template <typename T>
class ArrayList :public List<T> {
	public:
		/* CONSTRUCTORES */
		ArrayList(){
			int ext;
			cout << "Ingrese la extensión del arreglo: ";
			cin >> ext;
			this->ext = ext;
			this->Array = new T[this->ext];
			for (int i = 0; i < this->ext; i++){
				cout << "Ingrese el valor de indice " << i << ": ";
				cin >> this->Array[i];
			}
		};
		ArrayList(int ext, bool zero){
			this->index = ext;
			this->Array = new T[this->ext];
			for (int i = 0; i < this->ext; i++){
				if(zero == 0){
					this->Array[i]=0;
				}else{
					cout << "Ingrese el valor de indice " << i << ": ";
					cin >> this->Array[i];
				}
			}
		};
		~ArrayList(){
			this->index = 0;
			this->ext = 0;
			this->emptyList();
			this->Array = NULL;
		};
		ArrayList(const ArrayList &cpy){
			cpy->index = this->index;
			cpy->ext = this->ext;
			cpy->Array = new T[this->ext];
			for (int i = 0 ; i < this->ext ; i ++){
				cpy->Array[i] = this->Array[i];
			}
		};
		/* ATRIBUTOS */
		T* entry;
		int index;
		int ext;
		/* MÉTODOS */
		void exchange(int i , int j){
			int temp = this->Array[i];
			this->Array[i] = this->Array[j];
			this->Array[j] = temp;
		}

		int counterList(){
			return this->index;	
		}

		void emptyList(){
			for (int i = 0 ; i < this->index ; i ++){
				this->Array[i] = 0;
			}
		};

		void ListInsert(T n, int i){
			ArrayList* temp;
			temp = this;
			this->Array = new T[this->index+1];
			for (int j = 0 ; j < this->index+1 ; j ++){
				if (j = i){
					this->Array[j] = n;
				}else{
					this->Array[j] = temp->Array[i];
				}
			}		
		};
		void ListInsert(T n){
			ArrayList* temp;
			temp = this;
			this->Array = new T[this->index+1];
			for (int j = 0 ; j < this->index ; j ++){
					this->Array[j] = temp->Array[j];
			}
			this->Array[this->index+1]=n;
		};

		void ListDelete(T n ,int i){
			ArrayList* temp;
			temp = this;
			bool found = false;
			if (this->Array[i] == n){
				found = true;
			}else{
				return;
			}
			if (found == true){
				this->Array = new T[this->index-1];
				for (int j = 0 ; j < this->index-1 ; j ++){
					if (j != i){
						this->Array[j] = temp->Array[j];
					}
				}
			}	
		};
		void ListDelete(T n){
			ArrayList* temp;
			temp = this;
			bool found = false;
			int k = 0;
			for (int j = 0 ; j < this->index ; j ++){
				if (this->Array[j] == n){
					k = j;
					found = true;
				}
				else {
					return;
				}
			}
			if (found == true){
				this->Array = new T[this->index-1];
				for (int j = 0 ; j < this->index-1 ; j ++){
					if (j != k){
						this->Array[j] = temp->Array[j];
					}
				}
			}	
		};

		T get(int i){
			return this->Array[i];
		}

		int find(T n){
			for (int i = 0 ; i < index ; i ++){
				if(this->Array[i] == n){
					return n;
				}
			}
		};

		T next(int i){
			return this->Array[i+1];
		};
		T previous(int i){
			return this->Array[i-1];
		};

		T myr(){
			int mayor = this->Array[0];
			for (int i = 0; i < this->counterList() ; i ++){
				if (this->Array[i]>mayor){
					mayor = this->Array[i];
				}
			}
			return mayor;
		};

		T min(){
			int minor = this->Array[0];
			for (int i = 0; i < this->counterList() ; i ++){
				if (this->Array[i]<minor){
					minor = this->Array[i];
				}
			}
			return minor;
		};

		void printList(){
			cout << "[";
			for (int i = 0 ; i < index ; i ++){
					cout <<this->Array[i];
					if (i != index-1){
						cout << ",";
					}
			}
			cout << "]" << endl;
		};
	private:
	protected:
};
#endif

