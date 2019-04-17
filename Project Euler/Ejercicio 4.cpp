#include <iostream>
using namespace std;
bool esPalindromo(int x){
  int a,b,c,d,e,f;
  a = x/100000;
  b = (x/10000)%10;
  c = (x/1000)%10;
  d = (x/100)%10;
  e = (x/10)%10;
  f = x%10;
  if(a==f && b==e && c==d){
    return true;
  }
  return false;
}
int main(){
  int may = 0;
  for(int i=999;i>=100;i--){
    for(int j=999;j>=100;j--){
      if(esPalindromo(i*j)==true ){
        if(may<i*j){
          may= i*j;
        }
      }
    }
  }
  cout<<may<<endl;
}
