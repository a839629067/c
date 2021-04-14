#include<stdio.h>
int main()
{
	int a,i,max,min,average,num;
	a=0;
	i=0;num=0;max=0;min=0;average=0;
	printf("input how many numbers? ");
	scanf("%d",&num);
	scanf("%d",&a);
	max=a;min=a;average=a;
	for(i=2;i<=num;i++)
	{
		scanf("%d",&a);
		{
			average=average+a;
		if(max<a)
			max=a;
		if(min>a)
			min=a;
		}
	}
average=average/i;
printf("%d %d %d",max,min,average);}