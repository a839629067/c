#include <stdio.h>
int main(){
	char a,b,c;
	scanf("%c",&a);
	if(a == 'a' && a == 'z')
		printf("error");
	else
		b=a-1;
		c=a+1;
		printf("%c %c",b,c);
}
