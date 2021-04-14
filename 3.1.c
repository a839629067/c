#include <stdio.h>
#include <math.h>
int main(){
	float x,a;
	scanf("%f",&x);
		if (x>0 && x<1) 
		a=x;
		else
			if (x>=3 && x<=4) 
				a=fabs(x)+2;
			else 
				a = sin(x*x);
	
	printf("%f",a);
	return x;
}