#include<stdio.h>
int main(){
    int i,a[10],j,k,flag,temp;
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(j=0;j<9;j++){
        flag=j;
        for(k=j+1;k<10;k++)
        {
            if (a[flag]>a[k])
                flag=k;
        }
        temp=a[flag];
        a[flag]=a[j];
        a[j]=temp;
    }
    for(i=0;i<=9;i++)
        printf("%d ",a[i]);
}