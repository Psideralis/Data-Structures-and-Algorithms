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

#ifndef DOUBLELIST_HPP
#define DOUBLELIST_HPP

#include "List.hpp"
#include "DoublePosition.hpp"

template <typename T>
class DoubleLinkedList :public List<T> {
	public:
	/* CONSTRUCTORES */
	DoubleLinkedList(){
		int i = 1, in_ext;
		T campo;
		this->content = new DoublePosition<T>;
		cout << "Ingrese la extensión de la lista doble enlazada: ";
		cin >> in_ext;
		DoublePosition<T>* loop;
		DoublePosition<T>* temp;
		do{
			if ( i == 1) {
				cout << "Ingrese el contenido de el campo "<< i <<" : ";
				cin >> campo;
				this->content->previous = NULL;
				this->content->content = campo;
				if (in_ext == 1){			
					this->content->next = NULL;
					break;
				}else{
					this->content->next = new DoublePosition<T>();
					loop = this->content->next;
					loop->previous = this->content;
				}
			} else {
				cout << "Ingrese el contenido de el campo "<< i <<" : ";
				cin >> campo;
				loop->content = campo;
				if (i==in_ext){			
					loop->next = NULL;
					break;
				}else{ 
					temp = loop;
					loop->next = new DoublePosition<T>();
					loop = loop->next;
					loop->previous = temp;
				}
			}
			i += 1;
		}while ( loop != NULL);
	};
	DoubleLinkedList(T i){
		this->content->content = i;
		this->content->previous = NULL;
		this->content->next = NULL;
	};
	~DoubleLinkedList(){
		this->emptyList();
		this->content->previous = NULL;
		this->content->next = NULL;
		this->content = NULL;
	};
	DoubleLinkedList(const DoubleLinkedList &cpy){
		DoublePosition<T>* loop = this->content;
		DoublePosition<T>* temp_1 = cpy->content;
		cpy->content = loop;
		temp1 = cpy->content;
		while (loop =! NULL){
			temp_1->next = loop->next;
			temp_1->previous = loop->previous:
			temp_1->content = loop->content; 
			temp_1 = loop->next;
			loop = loop->next;
		}
	};

	/* ATRIBUTOS */
	DoublePosition<T>* content;

	/* MÉTODOS */
	void exchange(int i, int j){
		int k = 0, m;
		DoublePosition<T>* loop = this->content;
		DoublePosition<T>* temp_1;
		DoublePosition<T>* temp_2;
		while ( loop != NULL){			
			if( k == i){
				temp_1 = loop;
				m = k;
			}
			if ( k == j){
				temp_2 = loop;
				loop->content = temp_1->content;
			}
			loop = loop->next;
			k+=1;
		}
		loop = this->content;
		while ( loop != NULL){
			if( k == m){
				loop->content = temp_2->content;
				m = k;
			}
			k+=1;
		}
	}

	int counterList(){
		int i = 0;
		DoublePosition<T>* loop = this->content;
		while(loop != NULL){
			loop = loop->next;
			i += 1;
		}
		return i;	
	}

	
	void emptyList(){
		int i = 0;
		DoublePosition<T>* loop = this->content;
		while(loop != NULL){
			loop->content = 0;
			loop = loop->next;
			i += 1;
		}
	}

	void ListInsert(T n, int i){
		int j = 0;
		DoublePosition<T>* loop = this->content;
		DoublePosition<T>* temp_1;
		while(loop!=NULL){
			if (j == i){
				loop->next = new DoublePosition<T>();
				loop->content = n;
				loop->next->next = temp_1->next;
			}
			loop = loop->next;
			temp_1 = loop;
			j += 1;
		}
	}
	void ListInsert(T n){
		int j = 0;
		DoublePosition<T>* loop = this->content;
		while(loop!=NULL){
			if (j == this->counterList()){
				loop->next = new DoublePosition<T>();
				loop->content = n;
				loop->next->next = NULL;
			}
			loop = loop->next;
			j += 1;
		}
	}

	
	void ListDelete(T n ,int i){
		int j = 0;
		DoublePosition<T>* loop = this->content;
		DoublePosition<T>* temp_1;
		DoublePosition<T>* temp_2;
		while(loop!=NULL){
			if (j == i){
				if ( this->get(i) == n){
					temp_1->next = temp_2->next;
					temp_2->previous = temp_1;
					loop = NULL;
					break;
				}
			}
			temp_1 = loop;
			loop = loop->next;
			temp_2 = loop;
			j += 1;
		}
	}
	
	void ListDelete(T n){
		int j = 0;
		DoublePosition<T>* loop = this->content;
		while(loop!=NULL){
			if (j == this->counterList()){
				if ( this->get(j) == n){
					loop = NULL;
					break;
				}
			}
			j += 1;
		}
	}

	T get(int i){
		int j = 0;
		DoublePosition<T>* loop = this->content;
		while(loop != NULL){
			if (j = i){
				return loop->content;
			};
			loop = loop->next;
			j += 1;
		}
	}
	int find(T n){
		int i = 0;
		DoublePosition<T>* loop = this->content;
		while(loop != NULL){
			if (loop->content = n){
				return i;
			};
			loop = loop->next;
			i += 1;
		}
	}
	T next(int i){
		int j = 0;
		DoublePosition<T>* loop = this->content;
		while(loop != NULL){
			if (j = i+1){
				return loop->content;
			};
			loop = loop->next;
			j += 1;
		}
	}
	T previous(int i){
		int j = 0;
		DoublePosition<T>* loop = this->content;
		while(loop != NULL){
			if (j = i-1){
				return loop->content;
			};
			loop = loop->next;
			j += 1;
		}		
	}

	int myr(){
		DoublePosition<int>* loop = this->content;
		int mayor = this->content->content;
		while(loop != NULL){
			if (mayor<loop->next->content){
				mayor = loop->next->content;
			}
			loop = loop->next;
		}
		return mayor;
	};

	int min(){
		DoublePosition<int>* loop = this->content;
		int minor = this->content->content;
		while(loop != NULL){
			if (minor>loop->next->content){
				minor = loop->next->content;
			}
			loop = loop->next;
		}
		return minor;
	};
 	
	T rand(){
		random_device dev;
		mt19937 rng(dev());
		uniform_int_distribution<mt19937::result_type> dist6(0,this->counterList());
		int j = 0;
		SinglePosition<SingleElement>* loop = this->content;
		while(loop != NULL){
			if (j = dist6(rng)){
				return loop->content;
			};
			loop = loop->next;
			j += 1;
		}
	};

	T rand(int i, int j) {
		random_device dev;
		mt19937 rng(dev());
		uniform_int_distribution<mt19937::result_type> dist6(i,(j%this->counterList()+1));
		int j = 0;
		SinglePosition<SingleElement>* loop = this->content;
		while(loop != NULL){
			if (j = dist6(rng)){
				return loop->content;
			};
			loop = loop->next;
			j += 1;
		}
	};

	void printList(){
		DoublePosition<T>* loop = this->content;
		cout << "[";
		int i = 1;
		while ( loop != NULL){
			cout << loop->content;
			if ( i == this->counterList()){
				break;		
			}else {
				cout << ",";
			}
			loop = loop->next;
			i += 1;
		}
		cout << "]" << endl;
		i += 1;
	}

	private:
	protected:
};

#endif