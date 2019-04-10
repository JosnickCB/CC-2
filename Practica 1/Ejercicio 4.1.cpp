#include <iostream>
using namespace std;

int main(){
	short number;
	cout<<"Ingresa un numero: ";
	cin>>number;
	cout<<"El factorial de "<<number<<" es ";
	int accumulator=1;
	for(;number>0;accumulator*=number --);
	cout<<accumulator<<"\n";
	return 0;
}
