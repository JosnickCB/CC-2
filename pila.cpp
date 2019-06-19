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
class stack{
	int stock;
	int count = 0;
	nodo<T>* ini;
	public:
		stack(){
			stock = 10;
			ini = NULL;
		}
		stack(nodo<T>* nnodo){
			stock = 10;
			ini = nnodo;
		}
		void setstock(int n){
			if(count>n){
				cout<<"No se puede asignar este stock\n";
			}else{
				stock = n;
			}
		}
		nodo<T>* getlast(){
			nodo<T>* aux = ini;
			while(aux->getnext()!=NULL){
	    	    aux = aux->getnext();
	    	}
	    	return aux;
		}
		void push(T N){
			if(count==stock){
				cout<<"La pila esta llena\n";
			}else{
				if(ini==NULL){
					nodo<T> *newnode = new nodo<T>(N);
	    			newnode->setnext(this->ini);
	    			this->ini = newnode;
	        		count++;
	    		}else{
			    	nodo<T> *newnode = new nodo<T>(N);
			    	nodo<T> *ptr = ini;
			    	while(ptr->getnext()!=NULL){
			        	ptr=ptr->getnext();
			    	}
			    	ptr->setnext(newnode);
			    	count++;
				}
			}
		}
		T top(){
			if(count > 0)
				return this->getlast()->getdata();
			else
				cout<<"La pila esta vacia\n";
		}
		T pop(){
			T mostrar = this->top();
			if(count < 1){
				cout<<"La pila esta vacia\n";
			}else{
				int aux = 0;
			    nodo<T> *curr = ini;
			    nodo<T> *prev = ini;
			    while(curr!=NULL/*&&curr->getnext()!=NULL*/){
			    	if(aux==count-1){
			    		nodo<T>* temp = curr;
			    		prev->setnext(curr->getnext());
			    		delete temp;
			    		break;
			    	}
			    	prev = curr;
			    	curr = curr->getnext();
			    	aux++;
			    }
			}
			count--;
			return mostrar;
		}
		bool empty(){
			return ini == NULL;
			}
		void print(){
		    nodo<T>* ptr = ini;
		    if(ini==NULL){
		    	cout<<"Pila Vacia \n";
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
};
int main(){
	stack<int> f;
	//cout<<f.empty()<<'\n';
	f.setstock(3);
	f.print();
	f.push(8);
	//cout<<f.empty()<<'\n';
	f.print();
	f.push(7);
	f.print();
	f.push(4);
	f.print();
	f.push(1);
	f.print();
	int r = f.pop();
	cout<<"|- "<<r<<" -|\n";
	f.print();
	f.setstock(5);
	f.push(6);
	f.print();
	f.push(3);
	f.print();
	cout<<f.top()<<'\n';
	f.push(2);
	f.print();
	f.push(9);
	f.print();
}