#include <iostream>
using namespace std;
void print(int (*M)[3],int lenC,int lenF){
	for(int i=0;i<lenC;i++){
		for(int j=0;j<lenF;j++){
			cout<<*(*(M+i)+j)<<' ';
		}
		cout<<endl;
	}
}
/*void mult2(int *p,int len1,int len2){
	for(int i=0;i<len1*len2;i++){
		if(!(i%len1))
			cout<<endl;
		cout<<*(p+i)<<' ';

	}
}*/
void multiplicar(int (*A)[3],int(* B)[3],int(* C)[3],int lenA,int lenB,int lenC){
	for(int i=0;i<lenA;i++){
		for(int j=0;j<lenB;j++){
			*(*(C+i)+j)=0;
			for(int k=0;k<lenC;k++){
				*(*(C+i)+j) += *(*(A+i)+k) * *(*(B+k)+j);
			}
		}
	}
}
int main(){
	int A[3][3]={{1,1,1},{1,1,1},{1,1,1}};
	int B[3][3]={{1,1,1},{1,1,1},{1,1,1}};
	int C[3][3];
	multiplicar(A,B,C,3,3,3);
	print(C,3,3);
}
