#include<stdio.h>
int main()
{
    int gcd(int u,int v);
    int lcm(int u,int v);
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",lcm(a,b));

}

int gcd(int u,int v)
{int temp=0;
if(u<v)
{
    temp=u;
    u=v;
    v=temp;
}
for(int i=v;i>0;i--)
    if(u%i==0 && v%i==0)
    {
        return i;
    }


}
int lcm(int u,int v)
{
return(u*v/gcd(u,v));
}