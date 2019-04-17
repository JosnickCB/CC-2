#include <iostream>
using namespace std;
int main(){
	long a = 1;
	long b = 2;
	long aux;
	long long r = 0;
	while(b<4000000){
		aux=a+b;
		a=b;
		b=aux;
		if(a%2==0){
			r+=a;
		}
	}
	cout<<"Suma de Fibonacci = "<<r<<endl;
	return 0;
}
