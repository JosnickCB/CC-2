#include <iostream>
using namespace std;
int sumac(int x){
    int c = 0;
    for(int i=1;i<=x;i++){
        c+=(i*i);
    }
    return c;
}
int sumaalcua(int x){
    int c = 0;
    for(int i=1;i<=x;i++){
        c+=i;
    }
    return c*c;
}
int main(){
    cout<<sumaalcua(100)-sumac(100)<<endl;
    return 0;
}
