#include <stdio.h>
int prime(int i)
{
    int j;
    if (i<=1)
        return 0;
    if (i==2)
        return 1;
    for (j=2;j<i;j++)
    {
        if(i%j==0)
            return 0;
        else
            if(i==j+1)
                return 1;
    }
}
int plalindrome(int p)
{   int lennum=0,z;
    z=p;
    while(z)
    {
        z=z/10;
        lennum++;
    }
    int q,h,k,len,i,j,n,temp[lennum];
    q=0;h=0;k=0;
    for(q=0;p!=0;q++)
    {
        temp[q]=p%10;
        p=p/10;
    }
    //len= sizeof(temp) / sizeof(temp[0]);
        for(i=0,j=lennum-1;i<j;i++,j--)
            if(temp[i]!=temp[j])
            {
                return 0;
                break;
            }
            if(i>=j)
                return 1;
            else
                return 0;
}
int main()
{
    int l;
    for(l=0;l<1000;l++)
    {
        if( prime(l) && plalindrome(l))
            printf("%d ",l);
    }
}