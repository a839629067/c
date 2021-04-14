#include <stdio.h>
void sort(int a,int b,int c,int *pmax,int *pmin)
{
    int max,min;
    max=(a>b?(a>c?a:c):(b>c?b:c));
    min=(a<b?(a<c?a:c):(b<c?b:c));
    *pmax=max;
    *pmin=min;
}
int main()
{ 
    int a,b,c,max,min;
    printf("Enter a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    sort(a,b,c,&max,&min);
    printf("max=%d,min=%d\n",max,min);
}