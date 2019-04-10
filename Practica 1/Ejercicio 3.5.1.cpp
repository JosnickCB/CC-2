#include <iostream>
using namespace std;

int main(){
	int dole=3;
	int bob=7;
	int accumulator=0;
	while(true){
		if(dole==0)break;
		accumulator+=((dole%2==1)?bob:0);
		dole/=2;
		bob*=2;
	}
	cout<<accumulator<<"\n";
}
