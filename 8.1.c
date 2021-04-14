#include<stdio.h>
#include<math.h>
#define s(a,b,c) (a+b+c)/2
#define area(s,a,b,c) sqrt(s*(s-a)*(s-b)*(s-c))

int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double y=s(a,b,c);
    printf("%lf",y);
    return 0;
}