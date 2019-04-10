#include <iostream>
using namespace std;

int main(){
	while(true){
		int n;
		cin>>n;
		n%5==0&&n>0?cout<<n/5<<endl:cout<<-1<<endl;
	}
}
