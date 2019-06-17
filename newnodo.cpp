#include <iostream>
using namespace std;
template<typename T>
class nodo{
    public:
    T data;
    nodo *next;
    nodo(){
    	data = NULL;
    	next = NULL;
	}
    nodo(T val){
    	data = val;
    	next = NULL;
	}
	void print(){
		cout<<"Dato: "<<data<<" Direccion: "<<this<<" Next: "<<next<<endl;
	}
};
template<typename T>
class literator;

template<typename T>
class List{
    public:
    nodo<T> *head;
    List(){
    	head = NULL;
    }
    void inserti(T val){
    	nodo<T> *newnode = new nodo<T>(val);
    	newnode->next=this->head;
    	this->head=newnode;
	}
    void pushback(T val){
    	if(head==NULL){
        	inserti(val);
        	return;
    	}
	    nodo<T> *newnode = new nodo<T>(val);
	    nodo<T> *ptr = this->head;
	    while(ptr->next!=NULL){
	        ptr=ptr->next;
	    }
	    ptr->next=newnode;
	}
    void insertAtPos(int pos,T val){
	    nodo<T> *newnode = new nodo<T>(val);
	    if(pos==1){
	        newnode->next=this->head;
	        this->head=newnode;
	        return;
	    }
	    pos--;
	    nodo<T> *ptr=this->head;
	    while(ptr!=NULL && --pos){
	        ptr=ptr->next;
	    }
	    if(ptr==NULL)
	    	return;
	    newnode->next=ptr->next;
	    ptr->next=newnode;
	}
    void remove(T data){
	    bool removed = false;
	    nodo<T> *curr = head;
	    nodo<T> *prev = head;
	    for (; curr != NULL && removed == false; curr = curr->next){
	        if (head->data == data){
	            nodo<T> *tmp = head;
	            head = head->next;
	            delete tmp;
	            removed = true;
	        }else if (curr->data == data){
	            nodo<T> *tmp = curr;
	            prev->next = curr->next;
	            delete tmp;
	            removed = true;
	        }
	        prev = curr;
	    }
	}
    void print(){
	    nodo<T>* ptr = head;
	    if(head==NULL){
	    	cout<<"Lista Vacia \n";
	    	return;
	    }
	    cout<<"|| ";
	    while(ptr!=NULL){
	        cout<<ptr->data;
	        if(ptr->next==NULL){
	        	cout<<" ||";
	        	break;
	        }else{
	        	cout<<" -> ";
	        	ptr=ptr->next;
	    	}
	    }
	    cout<<endl;
	}
    ~List(){
	    nodo<T> *ptr = this->head;
	    nodo<T> *next = NULL;
	    while(ptr!=NULL){
	        next=ptr->next;
	        delete(ptr);
	        ptr=next;
	    }
	}
	//literator<T>* i(this);
};

template<typename T>
class literator{
	nodo<T>* array;
	int index;
	public:
		literator(List<T>* narray){
			array = narray->head;
			if(array->next!=NULL)
				index=1;
			else
				index=0;
		}
		bool vacio(){
			return array->head == NULL;
		}
		void prev(List<T>* narray){
			if(index == 1){
				cout<<"Estas en el primer elemento\n";
			}else{
				nodo<T>* aux = narray->head;
				while(aux->next!=array){
					aux = aux->next;
				}
				array = aux;
			}
		}
		void sig(){
			if(array->next==NULL){
				cout<<"No hay siguiente elemento\n";
			}else{
				array = array->next;
			}
		}
		void getactual(){
			cout<<"|- "<<array->data<<" -|\n";
		}
		~literator(){
			array = NULL;
		}
};
int main(){
	nodo<int> a(7);
	nodo<int> b(8);
	a.print();
	b.print();
	List<int> f;
	f.print();
	f.pushback(9);
	f.print();
	f.pushback(8);
	f.print();
	f.pushback(7);
	f.print();
	f.insertAtPos(1,6);
	f.print();
	f.inserti(1);
	f.print();
	f.remove(8);
	f.print();
	//f.i(f)
	literator<int> i(&f);
	i.getactual();
	i.prev(&f);
	i.sig();
	i.getactual();
	i.sig();
	i.getactual();
	i.sig();
	i.getactual();
	i.sig();
	i.sig();
	i.sig();
}