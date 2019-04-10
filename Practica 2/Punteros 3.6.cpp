#include<iostream>
const int ARRAY_LEN=10;
int main(){
	int arr[ARRAY_LEN]={10};
	int*xPtr=arr ,*yPtr=arr+ARRAY_LEN- 1;
	for(int i=0;i<ARRAY_LEN;i++)
		std::cout<<arr[i]<<" ";
	std::cout<<'\n';
	std::cout<<*xPtr<<' '<<*yPtr;
	return 0;
}
