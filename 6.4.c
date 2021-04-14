#include<stdio.h>
#include<math.h>
int main()
{
int a;
scanf("%d",&a);
int prime1(int a);
int prime(int a);
prime1(a);
return 0;
}
int prime1(int a)
{
    int b,k=0,p=0,i;
    for(b=a+1;p==0;b++)
    {   k=sqrt(a+1);
        for(i=2;i<=k;i++)
        
            if(b%i==0)
                break;
            if(i>=k+1)
                p=b;
                printf("%d ",b);
                break;
    }
return p;
}