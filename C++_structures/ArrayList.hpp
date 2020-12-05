/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: ArrayList.hpp
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

CLASSES:

********************************************* */ 

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "List.hpp"
#include <iostream>

template <typename Element>
class ArrayList :public List<Element , int> {
	public:
		/* CONSTRUCTORES */
		ArrayList(){
			int ext;
			cout << "Ingrese la extensión del arreglo: ";
			cin >> ext;
			this->index = ext;
			this->Array = new Element[this->index];
			for (int i = 0; i < this->index; i++){
				cout << "Ingrese el valor de indice " << i << ": ";
				cin >> this->Array[i];
			}
		};
		ArrayList(int ext){
			this->index = ext;
			this->Array = new Element[this->index];
			for (int i = 0; i < this->index; i++){
				cout << "Ingrese el valor de indice " << i << ": ";
				cin >> this->Array[i];
			}
		};
		~ArrayList(){
			this->index = 0;
			this->emptyList();
			this->Array = NULL;
		};
		ArrayList(const ArrayList &cpy){
			cpy->index = this->index;
			cpy->Array = new Element[this->index];
			for (int i = 0 ; i < this->index ; i ++){
				cpy->Array[i] = this->Array[i];
			}
		};


		/* ATRIBUTOS */
		Element* Array;
		int index;
		
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

		void ListInsert(Element n, int i){
			ArrayList* temp;
			temp = this;
			this->Array = new Element[this->index+1];
			for (int j = 0 ; j < this->index+1 ; j ++){
				if (j = i){
					this->Array[j] = n;
				}else{
					this->Array[j] = temp->Array[i];
				}
			}		
		};
		void ListInsert(Element n){
			ArrayList* temp;
			temp = this;
			this->Array = new Element[this->index+1];
			for (int j = 0 ; j < this->index ; j ++){
					this->Array[j] = temp->Array[j];
			}
			this->Array[this->index+1]=n;
		};

		void ListDelete(Element n ,int i){
			ArrayList* temp;
			temp = this;
			bool found = false;
			if (this->Array[i] == n){
				found = true;
			}else{
				return;
			}
			if (found == true){
				this->Array = new Element[this->index-1];
				for (int j = 0 ; j < this->index-1 ; j ++){
					if (j != i){
						this->Array[j] = temp->Array[j];
					}
				}
			}	
		};
		void ListDelete(Element n){
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
				this->Array = new Element[this->index-1];
				for (int j = 0 ; j < this->index-1 ; j ++){
					if (j != k){
						this->Array[j] = temp->Array[j];
					}
				}
			}	
		};

		Element get(int i){
			return this->Array[i];
		}

		int find(Element n){
			for (int i = 0 ; i < index ; i ++){
				if(this->Array[i] == n){
					return n;
				}
			}
		};

		Element next(int i){
			return this->Array[i+1];
		};
		Element previous(int i){
			return this->Array[i-1];
		};

		Element myr(){
			int mayor = this->Array[0];
			for (int i = 0; i < this->counterList() ; i ++){
				if (this->Array[i]>mayor){
					mayor = this->Array[i];
				}
			}
			return mayor;
		};

		Element min(){
			int minor = this->Array[0];
			for (int i = 0; i < this->counterList() ; i ++){
				if (this->Array[i]<minor){
					minor = this->Array[i];
				}
			}
			return minor;
		};

		Element rand(){
			random_device dev;
			mt19937 rng(dev());
			uniform_int_distribution<mt19937::result_type> dist6(0,this->counterList());
			this->Array[dist6(rng)];
		};

		Element rand(int i, int j) {
			random_device dev;
			mt19937 rng(dev());
			uniform_int_distribution<mt19937::result_type> dist6(i,(j%this->counterList()+1));
			this->Array[dist6(rng)];
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

