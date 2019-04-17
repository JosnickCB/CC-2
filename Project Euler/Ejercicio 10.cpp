#include <iostream>
using namespace std;
bool esPrimo(long long x){
    for(long long i=2;i<x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    long long c=0;
    for(long long i=3;i<2000000;i++){
        if(esPrimo(i)==true){
            cout<<i<<endl;
            c+=i;
        }
    }
    cout<<c+2<<endl;
}
