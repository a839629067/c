#include<stdio.h>
int main()
{
	int level;
	float in,tax,out;
	printf("input income\n");
	scanf("%f",&in);
			level = (int)in/1000 ;
			switch(level)
			{
				case 0 : tax=0;break;
				case 1: tax=(in-1000)*0.05;break;
				case 2:tax=50+(in-2000)*0.1;break;
				case 3:case 4:case 5:tax=150+(in-4000)*0.15;break;
				default:tax= 600+(in-6000)*0.2;
			}
		out=in-tax;
		printf("tax is %.2f,net income is %.2f",tax,out);
	return 0; 
}