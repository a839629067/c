#include<stdio.h>
int main(){
    int i,j,m,n;
    int out(int A[2][2],int i,int j);
    scanf("%d %d",&i,&j);
    int  b[i][j];
    for (m=0;m<i;m++)
    {
        for(n=0;n<j;n++)
            scanf("%d",&b[m][n]);
    }
    
    
    out(b,i,j);
    return 0;
}
int out(int A[2][2],int i,int j)
{
    for(int n=0;n<j;n++)
    {   int max=A[0][n];
        int min=A[0][n];
        for(int m=0;m<i;m++)
        {
            if (A[m][n]>=max)
                max=A[m][n];
            if (A[m][n]<=min)
                min=A[m][n];
        }
        //int result[j];
        //result[m]=max-min;
        printf("%d\n",(max-min));
    }
    return 0;
}
