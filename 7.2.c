#include<stdio.h>
int find(int *p,int n,int x)
{   int flag=0;
    for(int i=0;i<n;i++,p++)
    {
        if(*p==x)
            return 1;
            flag=1;
        if((i==n-1)&&flag==0)
            return 0;
    }
}
int main()
{
    int i,n,x,m;
    scanf("%d",&n);
    int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&x);
	m=find(a,n,x);
	printf("%d\n",m);
	return 0;
}