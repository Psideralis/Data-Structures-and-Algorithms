#ifndef DOUBLELIST_HPP
#define DOUBLELIST_HPP

#include "List.hpp"
#include "DoublePosition.hpp"

template <typename DoubleElement>
class DoubleLinkedList :public List<DoubleElement , int> {
	public:
	/* CONSTRUCTORES */
	DoubleLinkedList(){
		int i = 1, in_ext;
		DoubleElement campo;
		this->contentBox = new DoublePosition<DoubleElement>;
		cout << "Ingrese la extensión de la lista doble enlazada: ";
		cin >> in_ext;
		DoublePosition<DoubleElement>* loop;
		DoublePosition<DoubleElement>* temp;
		do{
			if ( i == 1) {
				cout << "Ingrese el contenido de el campo "<< i <<" : ";
				cin >> campo;
				this->contentBox->previous = NULL;
				this->contentBox->content = campo;
				if (in_ext == 1){			
					this->contentBox->next = NULL;
					break;
				}else{
					this->contentBox->next = new DoublePosition<DoubleElement>();
					loop = this->contentBox->next;
					loop->previous = this->contentBox;
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
					loop->next = new DoublePosition<DoubleElement>();
					loop = loop->next;
					loop->previous = temp;
				}
			}
			i += 1;
		}while ( loop != NULL);
	};
	DoubleLinkedList(DoubleElement i){
		this->contentBox->content = i;
		this->contentBox->previous = NULL;
		this->contentBox->next = NULL;
	};
	~DoubleLinkedList(){
		this->emptyList();
		this->contentBox->previous = NULL;
		this->contentBox->next = NULL;
		this->contentBox = NULL;
	};
	DoubleLinkedList(const DoubleLinkedList &cpy){
		DoublePosition<DoubleElement>* loop = this->contentBox;
		DoublePosition<DoubleElement>* temp_1 = cpy->contentBox;
		cpy->contentBox = loop;
		temp1 = cpy->contentBox;
		while (loop =! NULL){
			temp_1->next = loop->next;
			temp_1->previous = loop->previous:
			temp_1->content = loop->content; 
			temp_1 = loop->next;
			loop = loop->next;
		}
	};

	/* ATRIBUTOS */
	DoublePosition<DoubleElement>* contentBox;

	/* MÉTODOS */
	void exchange(int i, int j){
		int k = 0, m;
		DoublePosition<DoubleElement>* loop = this->contentBox;
		DoublePosition<DoubleElement>* temp_1;
		DoublePosition<DoubleElement>* temp_2;
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
		loop = this->contentBox;
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
		DoublePosition<DoubleElement>* loop = this->contentBox;
		while(loop != NULL){
			loop = loop->next;
			i += 1;
		}
		return i;	
	}

	
	void emptyList(){
		int i = 0;
		DoublePosition<DoubleElement>* loop = this->contentBox;
		while(loop != NULL){
			loop->content = 0;
			loop = loop->next;
			i += 1;
		}
	}

	void ListInsert(DoubleElement n, int i){
		int j = 0;
		DoublePosition<DoubleElement>* loop = this->contentBox;
		DoublePosition<DoubleElement>* temp_1;
		while(loop!=NULL){
			if (j == i){
				loop->next = new DoublePosition<DoubleElement>();
				loop->content = n;
				loop->next->next = temp_1->next;
			}
			loop = loop->next;
			temp_1 = loop;
			j += 1;
		}
	}
	void ListInsert(DoubleElement n){
		int j = 0;
		DoublePosition<DoubleElement>* loop = this->contentBox;
		while(loop!=NULL){
			if (j == this->counterList()){
				loop->next = new DoublePosition<DoubleElement>();
				loop->content = n;
				loop->next->next = NULL;
			}
			loop = loop->next;
			j += 1;
		}
	}

	
	void ListDelete(DoubleElement n ,int i){
		int j = 0;
		DoublePosition<DoubleElement>* loop = this->contentBox;
		DoublePosition<DoubleElement>* temp_1;
		DoublePosition<DoubleElement>* temp_2;
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
	
	void ListDelete(DoubleElement n){
		int j = 0;
		DoublePosition<DoubleElement>* loop = this->contentBox;
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

	DoubleElement get(int i){
		int j = 0;
		DoublePosition<DoubleElement>* loop = this->contentBox;
		while(loop != NULL){
			if (j = i){
				return loop->content;
			};
			loop = loop->next;
			j += 1;
		}
	}
	int find(DoubleElement n){
		int i = 0;
		DoublePosition<DoubleElement>* loop = this->contentBox;
		while(loop != NULL){
			if (loop->content = n){
				return i;
			};
			loop = loop->next;
			i += 1;
		}
	}
	DoubleElement next(int i){
		int j = 0;
		DoublePosition<DoubleElement>* loop = this->contentBox;
		while(loop != NULL){
			if (j = i+1){
				return loop->content;
			};
			loop = loop->next;
			j += 1;
		}
	}
	DoubleElement previous(int i){
		int j = 0;
		DoublePosition<DoubleElement>* loop = this->contentBox;
		while(loop != NULL){
			if (j = i-1){
				return loop->content;
			};
			loop = loop->next;
			j += 1;
		}		
	}

	int myr(){
		DoublePosition<int>* loop = this->contentBox;
		int mayor = this->contentBox->content;
		while(loop != NULL){
			if (mayor<loop->next->content){
				mayor = loop->next->content;
			}
			loop = loop->next;
		}
		return mayor;
	};

	int min(){
		DoublePosition<int>* loop = this->contentBox;
		int minor = this->contentBox->content;
		while(loop != NULL){
			if (minor>loop->next->content){
				minor = loop->next->content;
			}
			loop = loop->next;
		}
		return minor;
	};
 	
	DoubleElement rand(){
		random_device dev;
		mt19937 rng(dev());
		uniform_int_distribution<mt19937::result_type> dist6(0,this->counterList());
		int j = 0;
		SinglePosition<SingleElement>* loop = this->contentBox;
		while(loop != NULL){
			if (j = dist6(rng)){
				return loop->content;
			};
			loop = loop->next;
			j += 1;
		}
	};

	DoubleElement rand(int i, int j) {
		random_device dev;
		mt19937 rng(dev());
		uniform_int_distribution<mt19937::result_type> dist6(i,(j%this->counterList()+1));
		int j = 0;
		SinglePosition<SingleElement>* loop = this->contentBox;
		while(loop != NULL){
			if (j = dist6(rng)){
				return loop->content;
			};
			loop = loop->next;
			j += 1;
		}
	};

	void printList(){
		DoublePosition<DoubleElement>* loop = this->contentBox;
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