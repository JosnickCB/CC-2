#include <iostream>
using namespace std;

int main(){
	int arg1;
	arg1 = -1;
	{
		char arg1='a';
		cout<<arg1<<"\n";	
	}
	// El valor de arg1 sera el que haya sido declarado en su bloque 
}
