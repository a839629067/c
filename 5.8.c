#include<stdio.h>
#include<stdlib.h>
//void srand(unsigned seed);
int main(){
    int a[10],i,j,temp;
    for (i=0;i<10;i++){
        a[i]=rand()%91+10;
    }
    for(i=0;i<9;i++)
        for(j=0;j<9-i;j++)
            if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
for(i=0;i<10;i++)
    printf("%d ",a[i]);

}