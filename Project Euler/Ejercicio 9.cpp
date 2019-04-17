#include <iostream>
using namespace std;
bool Pita(int a,int b,int c){
    return ((a*a)+(b*b)==(c*c));
}
int main(){
    for(int i=1;i<=1000;i++){
        for(int j=1;j<=1000;j++){
            for(int k=1;k<=1000;k++){
                if((i+j+k==1000 && Pita(i,j,k)==true)){
                    cout<<i<<" "<<j<<" "<<k<<endl;
                    cout<<i*j*k;
                    return 0;
                }
            }
        }
    }
}
