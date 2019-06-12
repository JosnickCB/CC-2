#include <iostream>
template <class T>
struct nodo{
		nodo* siguiente;
		T dato;
		nodo(){
			dato = NULL;
			siguiente = NULL;
		}
		nodo(T ndato){
			dato = ndato;
			siguiente = NULL;
		}
		//~nodo(){}
		void borrar(){
			delete this;
		}
		void imprimir(){
			std::cout<<dato<<"->";
		}
};
template <class T>
class lenlazada{
	nodo<T>* head;
	int longitud;
	public:
		lenlazada(){
			longitud = 0;
			head = NULL;
		}
		void add_head(T& nhead){
			nhead.siguiente = &head;
			head = &nhead;
			longitud += 1;
		}
		void borrar(int pos){
			nodo<T>* aux = &head;
			nodo<T>* piv;
 			if(pos<0 || pos>longitud){
				std::cout<<"Fuera de rango\n";
			}else if(pos == 0){
				head = head.siguiente;
				head.borrar();
				longitud -= 1;
			}else{
				for(int i=1;i<pos;++i){
					if(aux.dato != NULL && i != pos){
						*aux = head.siguiente;
						*piv = &head;
					}else{
						piv->siguiente = aux->siguiente;
						aux->borrar();
						longitud -= 1;
					}
				}
			}
		}
		void insertar(int pos,T& ndato){
			nodo<T>* aux = &head;
			nodo<T>* piv;
			if(pos<0 || pos>longitud){
				std::cout<<"Fuera de rango\n";
			}else if(pos == 0){
				head.dato = &ndato;
				ndato.siguiente = head.siguiente;
				longitud += 1;
			}else{
				for(int i=1;i<pos;i++){
					if(i != pos){
						*aux = head.siguiente;
						*piv = &head;
					}else{
						piv->siguiente = &ndato;
						ndato.siguiente = *aux;
					}
				}
			}
		}
		
};
int main(){
	nodo<int> a(12);
	nodo<int> b(15);
	lenlazada<int>* array;
	array = new lenlazada<int>;
}
