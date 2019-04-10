#include <iostream>
int sum(const int numbers[],const int numbersLen){
return numbersLen==0?0:numbers[0]+sum(numbers+1,numbersLen-1);
}
int main(){
}
