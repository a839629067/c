#include<stdio.h>
int main(){
	int a,b,c,d,x;
	scanf("%d %d %d",&a,&b,&c);
	(a>b)?((a>c)?(d=a):(d=c)):((b>c)?(d=b):(d=c));
	(a<b)?((a<c)?(x=a):(x=c)):((b<c)?(d=b):(d=c));
	if(a==b) (a>c)?((d=a)&&(x=c)):((d=c)&&(x=a));
	if(a==c) (a>b)?((d=a)&&(x=b)):((d=b)&&(x=a));
	if(b==c) (b>a)?((d=b)&&(x=a)):((d=a)&&(x=b));
printf("max is %d,min is %d",d,x);}