#include<stdio.h>
#include<math.h>
int main(){
	double term,i,j,k,e,m;
	k=1;e=1;term=1;m=pow(10,-100);
		for(i=1;i>=1;i++)
		{
			k=k*i;
			term=1/k;
			e=e+term;
			if (term<m)
				break;
		}
printf("%lf",e);	
}