#include <iostream>
#include <cstdlib>
#include <tgmath.h>
int main(){
	double x=rand()/(double)RAND_MAX ,y=rand()/(double)RAND_MAX;
	int n = 8; // Veces a simular
	int dartsInCircle=0;
	for(int i=0;i<n;++i){
		double x=rand()/(double)RAND_MAX ,y=rand()/(double)RAND_MAX;
		if(sqrt(x*x+y*y)<1){
			++dartsInCircle;
		}
	}
}
