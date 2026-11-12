#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NEED_ERR 0.05

double f(double x){
	return (4*pow(x,4)+3*x-3);
}

int main(){
	double a,b,c;
	double fa,fa,fc;
	scanf("%lf %lf",&a,&b);
	for(;err>NEED_ERR;){
		fa=f(a);
		fb=f(b);
		c=(a+b)/2.0d;
		fc=f(c);
		if((fa*fc)<0){

	return 0;
}
