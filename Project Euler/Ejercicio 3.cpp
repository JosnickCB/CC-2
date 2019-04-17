#include <iostream>
using namespace std;
bool esPrimo(int x){
	for(long long i=2;i<x/2;i++)
		if(x%i==0){
			return false;
		}
	return true;
}
long long dividir(long long x,long long y){
	if(x%y==0)
		dividir(x/y,y);
	else
		return x;
}
int main(){
	const long long n=600851475143;
	long long p=n;
	for(long long i=2;i<p;i++){
		if(esPrimo(i)){
			p=dividir(p,i);
		}
	}
	cout<<p<<"\n";
}
