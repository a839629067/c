#include<stdio.h>
#include<math.h>
int main()
{
    int i,j;
    for(i=0;i<=150;i++)
    {
        for(j=0;j<=150;j++)
        {
            if((((i*i)+j)==1053)&&(((j*j)+i)==873))
                printf("%d %d",i,j);}}}