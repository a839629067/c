#include<stdio.h>
void convert(int (*a)[3],int (*b)[3])
{
    int i,j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            *(*(b+j)+i)=*(*(a+i)+j);
}
int main()
{
    int a[3][3],b[3][3];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++) 
            scanf("%d",&a[i][j]);
    convert(a,b);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++) 
        {
            printf("%3d",b[i][j]);
        }
        printf("\n");
    }
}