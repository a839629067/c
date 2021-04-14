#include <stdio.h>
int main()
{
    int i,temp[3],j,k,sum,n,count,len,m,u,p,q,result;
    sum=0;count=0;j=0;
    for(i=100;i<1000;i++)
   {
        p=i;
        u=i;
        for(q=0;p!=0;q++)
    {
        temp[q]=p%10;
        p=p/10;
    }
    len= sizeof(temp) / sizeof(temp[0]);
    sum = 0;
    for(m=len-1;m>=0;m--)
    {   
        sum=sum+temp[m];
    }
    if(sum==9 && u%5==0)
    {
       count++;
    }}
printf("%d",count);}