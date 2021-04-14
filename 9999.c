#include <stdio.h>
int main()
{
    float n,x,s=0,max,min,avg;
    int i;
    printf("input n numbers:\n");
    scanf("%f",&n);
    for(i=0;i < n; i++) 
  {
	scanf("%f",&x);
    if (i == 0) 
	{ 
	  min=x;
	  max=x;
      s+=x;
    }
    if(x>max)
    max=x;
    if(x<min)
    min=x;
  }
    avg=s/(float)n;
    printf("max=%f,min=%f,average=%.2f\n",max,min,avg);
}