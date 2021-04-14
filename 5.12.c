#include<stdio.h>
#include<math.h>
int main(){
    int n,i,j,k,m;
    printf("input n:");
    scanf("%d",&n);
    (n>0)?(n=n):(n=-n);
    int a[n],temp[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&temp[i]);
        a[i]=temp[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%d ",a[j]);
        printf("\n");
        a[n-1]=temp[0];
        for(k=0;k<(n-1);k++)
        {
            a[k]=temp[k+1];
        }
        for (m=0;m<n;m++)
        {
        temp[m]=a[m];
        }
    }
}