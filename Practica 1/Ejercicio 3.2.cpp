#include <iostream>
using namespace std;
int main(){
	int N;
	cout<<"Enter N: ";
	cin>>N;
	int acc=0;
	cin>>acc;
	int minVal=acc;
	int maxVal=acc;
	for(int i=1;i<N;++i){
		int a;
		cin>>a;
		acc+=a;
		if(a<minVal){
			minVal=a;
		}
		if(a>maxVal){
			maxVal=a;
		}
	}
	cout<<"Promedio:"<<(double)acc/N<<"\n";
	cout<<"Max:"<<maxVal<<"\n";
	cout<<"Min:"<<minVal<<"\n";
	cout<<"Rango:"<<(maxVal- minVal)<<"\n";
	return 0;
}
