#include <iostream>
using namespace std;

int main(){
	long long number;
	cout<<"Ingresa un numero: ";
	cin>>number;
	if(number<0){cout<<"No existe el factorial de numeros negativos";return 0;}
	if(number>=20){cout<<"Esta computadora no dara un resultado correcto";return 0;}	
	cout<<"El factorial de "<<number<<" es ";
	int accumulator=1;
	for(;number>0;accumulator*=number--);
	cout<<accumulator<<"\n";
	return 1;
}
