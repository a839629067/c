#include <stdio.h>
int main(){
	int a,b,c,z;
	scanf("%d %d %d",&a,&b,&c);
	if (a<b)
		z=a;
	else
		z=b;
	if(z<c)
		printf("%d",z);
	else
		printf("%d",c);
	return z;
}