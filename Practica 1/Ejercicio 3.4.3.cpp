#include <iostream>
using namespace std;

int main(){
	while(true){
		int n;
		cin>>n;
		if(n%5>0){
			cout<<"-1\n"<<endl;	
			continue;
		}
		if(n==-1){
			break;
		}
		cout<<n/5<<endl;
	}
	cout<<"Goodbye"<<endl;
}
