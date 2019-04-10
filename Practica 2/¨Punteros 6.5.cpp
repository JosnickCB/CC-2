#include <iostream>
void reverse(int numbers[],const int numbersLen){
	for(int i=0;i<numbersLen/2;++i){
		int tmp=*(numbers+i);
		int indexFromEnd=numbersLen-i-1;
		*(numbers+i)=*(numbers+indexFromEnd);
		*(numbers+indexFromEnd)=tmp;
	}
}
int main(){
	
}
