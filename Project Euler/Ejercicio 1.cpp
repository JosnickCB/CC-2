#include <iostream>
using namespace std;
bool mul3(int x){
	return x%3==0;
}
bool mul5(int x){
	return x%5==0;
}
int main(){
	int n = 1000;
	int c = 0;
	for(int x=0;x<n;x++){
    if(mul3(x)==true){
		c+=x;
	}else{
		if(mul5(x)==true){
			c+=x;
			}
		}
	}
	cout<<c<<endl;
	return 0;
}
