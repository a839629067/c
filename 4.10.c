#include <stdio.h>
#include <math.h>
double accurancy=0.0001;
double f(double x)
{
    return 2*pow(x,3)-4*pow(x,3)+3*x-6;
}
int main(){
    double x0,x1=-10,x2=10,k;
    while(fabs((x2-x1))>accurancy)
    {
        x0=(x1+x2)/2.0;
        k=f(x0);
        if (f(x0)*f(x2)<0)
            x1=x0;
        else if (f(x0)*f(x1)<0)
            x2=x0;
        
    }
    x0=(x1+x2)/2.0;
    printf("%lf",x0);
}