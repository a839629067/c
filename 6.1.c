#include<stdio.h>
int converse(int a)
{
    int i,j=1,k,len,num=0,z;
    i=10;len=0;z=a;
       for(i=0;a!=0;i++)
    {
        a=a/10;
        len++;

    }
    int temp[len];
    for(i=0;z!=0;i++)
    {
        temp[i]=z%10;
        z=z/10;
    }
    j=1;
    for(i=len-1;i>=0;i--)
    {
        num=num+(temp[i]*j);
        j*=10;
    }
    return num;
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",converse(a));
}