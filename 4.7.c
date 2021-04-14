#include<stdio.h>
#include<math.h>
int main(){
    int i,j,k,d;
    for(i=0;i<=9;i++)
    {
        for(j=0;j<=9;j++)
        {
            for(k=0;k<=9;k++)
            {   d=(100*i)+(10*j)+k;
                if(d==(pow(i,3)+pow(j,3)+pow(k,3)) && d>=100)
                    printf("%d ",d);
            }
        }
    }
}