#ifndef LIST_HPP
#define LIST_HPP
template  <typename Element, typename Position>
class List{
	public:
		/* CONSTRUCTORES */
		List(){};
		virtual ~List(){};
		List(const List &cpy){};

		/* MÉTODOS *//* *********************************************
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

public class ArrayList<T> {
    
    
    public static void main(String[] args) {
      System.out.println("Hello World");
    }
  }
		/* VIRTUALES */
		virtual int counterList() = 0;
		virtual void emptyList() = 0;
		virtual void exchange(Position pst_1, Position pst_2) = 0;
		virtual void ListInsert(Element elm, Position pst) = 0;
		virtual void ListInsert(Element elm) = 0;
		virtual void ListDelete(Element elm ,Position pst) = 0;
		virtual void ListDelete(Element elm) = 0;
		virtual Element get(Position pst) = 0;
		virtual Position find(Element elm) = 0;
		virtual Element next(Position pst) = 0;  
		virtual Element previous(Position pst) = 0;
		virtual Element myr() = 0;  
		virtual Element min() = 0;
		virtual Element rand() = 0;
		virtual Element rand(Position i, Position j) = 0;
		virtual void printList() = 0;

		/* IMPLEMENTADOS */
		void mergeSort(List<int,int>* MyList){}
		void quickSort(List<int,int>* MyList){
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
		void selectionSort(List<int,int>* MyList){
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
		bool linealSearch(List<int,int>* MyList, int i){
			for (int j = 0 ; j < MyList->counterList(); j++){
				if (MyList->get(j) == i ){
					return true;
				}
			}
		}
		bool binarySearch(List<int,int>* MyList, int i){
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

		List* fibonacciArray(int k){
			List<int, int>* fibonacciSerie = new List<int, int>();
			fibonacciSerie->index = k;
			fibonacciSerie->Array = new int[fibonacciSerie->index];
			for (int i = 0; i < k ; i ++){
				fibonacciSerie->Array[i] = fibonacciNum(k);
			}
			return fibonacciSerie;
		}
		bool fibonacciSearch(List<int,int>* MyList, int i){

		}
	private:
	protected:
};
#endif 