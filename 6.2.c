#include<stdio.h>
#include<math.h>
int dayu(int q,int j,int k)
{
double x1,x2,n,m,a,b,c;
//a=(double)q;
//b=(double)j;
//c=(double)k;
x1=(-b+sqrt(b*b-4*a*c))/(2*a);
x2=(-b-sqrt(b*b-4*a*c))/(2*a);
printf("%lf %lf",x1,x2);
return 0;


}
int dengyu(int a,int b,int c)
{

double x;
x=(-b+sqrt(b*b-4*a*c))/(2*a);
printf("%lf",x);
return 0;

}
int xiaoyu(int a,int b,int c)
{

printf("null");
return 0;

}
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if((b*b-4*a*c)>0)
    dayu(a,b,c);
if((b*b-4*a*c)==0)
    dengyu(a,b,c);
if((b*b-4*a*c)<0)
    xiaoyu(a,b,c);

}






