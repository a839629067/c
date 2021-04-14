#include <stdio.h>
int main(){
    double distance=100.0,total=0;
    int i,time;
    for(time=1;time<=10;time++)
    {   
        total=total+distance;
        distance=distance/2;
        total=total+distance;
    }
    printf("%lfm %lfm",total,distance);}