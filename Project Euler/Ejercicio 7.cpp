#include <iostream>
using namespace std;
bool esPrimo(int x){
    int c = 0;
    for(int i=1;i<=x;i++){
        if(x%i==0){
            c++;
        }
    }
    return (c==2);
}
int main(){
    int n = 2;
    int c = 1;
    while(c<=10001){
        if(esPrimo(n)==1){
            cout<<n<<endl;
            c++;
            n++;
        }else{n++;}
    }
    cout<<n<<endl;
    return 0;
}
