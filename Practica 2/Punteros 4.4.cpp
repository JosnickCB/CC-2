#include <iostream>
//int sum(const int x,const int y,const int z){return x + y + z;}
int sum(const int a,const int b,const int c=0,const int d=0){return a+b+c+d;}
int main(){
	std::cout<<sum(1,2,3)<<'\n';
}
