#include <iostream>
void printArray(const int arr[],const int len){
	for(int i=0;i<len;++i){
		std::cout<<arr[i];
		if(i<len-1){
			std::cout<<", ";
		}
	}
}
int main(){
	
}
