#include<stdio.h>
int exchange(int *a,int n,int m)
{
int temp[100];
for(int i=0;i<n;i++)
    temp[i]=a[i];
for(int i=0;i<m;i++)
    a[i]=temp[n-m+i];
for(int i=m;i<n;i++)
    a[i]=temp[i-m];
}

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    exchange(a,n,m);
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
