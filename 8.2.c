#include<stdio.h>
#define N 3
#define Y(n) ((N+1)*n)
int main()
{
    double z;
    z=2*(N+Y(5+1));
    printf("%lf",z);
    
}