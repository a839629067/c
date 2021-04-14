#include<stdio.h>
int main(){
	int i,a,b,c,k;
	i=0;a=0;b=0;c=0;k=0;
	for (k=1;k<=20;k++)
	{
		scanf("%d",&i);
		(i==0)?(b++):((i>0)?(a++):(c++));
	}
	printf("%d,%d,%d",a,b,c);}