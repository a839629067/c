#include<stdio.h>
int main(){
	char a;
	a=getchar();
	if(a<=84)
		a=a+6;
	if(a>=97 && a<=116)
		a=a+6;
	if(a>=85 && a<=90)
		a=a-20;
	if(a>=117 && a<=122)
	    a=a-20;
	putchar(a);
	return a;
}