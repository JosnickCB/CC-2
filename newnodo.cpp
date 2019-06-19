#include <iostream>
using namespace std;

template<typename T>
class nodo{
    T data;
    nodo *next;
	
    public:
	
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
	T getdata(){
		return data;
	}
	nodo<T>* getnext(){
		return next;
	}
	void setnext(nodo<T>* nnodo){
		next = nnodo;
	}
	void setdata(T dato){
		data = dato;
	}
};
template<typename T>
class literator;

template<typename T>
class List{
    
    nodo<T> *head;
    public:
    nodo<T>* gethead(){
    	return head;
    }
    List(){
    	head = NULL;
    }
    void inserti(T val){
    	nodo<T> *newnode = new nodo<T>(val);
    	newnode->setnext(this->head);
    	this->head = newnode;
	}
    void pushback(T val){
    	if(head==NULL){
        	inserti(val);
        	return;
    	}
	    nodo<T> *newnode = new nodo<T>(val);
	    nodo<T> *ptr = this->head;
	    while(ptr->getnext()!=NULL){
	        ptr=ptr->getnext();
	    }
	    ptr->setnext(newnode);
	}
    void insertAtPos(int pos,T val){
	    nodo<T> *newnode = new nodo<T>(val);
	    if(pos==1){
	        newnode->setnext(this->head);
	        this->head = newnode;
	        return;
	    }
	    pos--;
	    nodo<T> *ptr = this->head;
	    while(ptr!=NULL && --pos){
	        ptr = ptr->getnext();
	    }
	    if(ptr==NULL)
	    	return;
	    newnode->setnext(ptr->getnext());
	    ptr->setnext(newnode);
	}
    void remove(T data){
	    bool removed = false;
	    nodo<T> *curr = head;
	    nodo<T> *prev = head;
	    for (; curr != NULL && removed == false; curr = curr->getnext()){
	        if (head->getdata() == data){
	            nodo<T> *tmp = head;
	            head = head->getnext();
	            delete tmp;
	            removed = true;
	        }else if (curr->getdata() == data){
	            nodo<T> *tmp = curr;
	            prev->setnext(curr->getnext());
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
	        cout<<ptr->getdata();
	        if(ptr->getnext()==NULL){
	        	cout<<" ||";
	        	break;
	        }else{
	        	cout<<" -> ";
	        	ptr=ptr->getnext();
	    	}
	    }
	    cout<<endl;
	}
    ~List(){
	    nodo<T> *ptr = this->head;
	    nodo<T> *next = NULL;
	    while(ptr!=NULL){
	        next=ptr->getnext();
	        delete(ptr);
	        ptr=next;
	    }
	}
	literator<T>* createiterator(){
		return new literator<T>(this);
	}
};

template<typename T>
class literator{
	nodo<T>* array;
	nodo<T>* phead;
	int index = 1;
	public:
		literator(List<T>* narray){
			array = narray->gethead();
			phead = narray->gethead();
			if(array->getnext()!=NULL)
				index=1;
			else
				index=0;
		}
		nodo<T>* getarray(){
			return array;
		}
		bool vacio(){
			return array->head == NULL;
		}
		void prev(){
			if(index == 1){
				cout<<"Estas en el primer elemento\n";
			}else{
				int aux = 1;
				nodo<T> *curr = phead;
			    while(aux<index){
			    	curr = curr->getnext();
			    	aux++;
			    }
			    array = curr;
			}
			index--;
		}
		void sig(){
			if(array->getnext()==NULL){
				cout<<"No hay siguiente elemento\n";
			}else{
				array = array->getnext();
				index++;
			}
		}
		void getactual(){
			cout<<"|- "<<array->getdata()<<" -|\n";
		}
		~literator(){
			array = NULL;
		}
		
};
template<typename T>
void operator ++(literator<T> &a){
	a.sig();
}
template<typename T>
void operator --(literator<T> &a){
	a.prev();
}
template<typename T>
bool operator ==(const literator<T> &a,const literator<T> &b){
	cout<<&(a.getarray()->getdata())<<'\n';
	cout<<&(b.getarray()->getdata())<<'\n';
	return a.getarray()->getdata() == b.getarray()->getdata();
}
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
	i.getactual(); // 1
	--i; //No se puede ir mas atras
	++i;
	i.getactual(); // 6
	++i;
	i.getactual(); // 9
	++i;
	i.getactual(); // 7 
	++i; //No se puede ir mas adelante
	i.getactual(); // 7
	--i;
	//--i;
	i.getactual(); // 9
	//--i;
	//i.getactual();
	//####ITERATOR####
	literator<int>* first = f.createiterator();
	literator<int>* second = f.createiterator();
	++first;
	bool r = (first==second);
	cout<<"Respuesta "<<r<<'\n';
}
