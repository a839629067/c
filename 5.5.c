#include<stdio.h>
int main()
{
    int b[3][4],i,j,k,max=0,line=0,count=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            if(b[i][j]>max)
            {
                max=b[i][j];
                line=j;
            }
        }
        for (k=0;k<3;k++)
        {
            if (b[k][line]<max)
                break;
            else
                printf("(%d,%d)",i,line);
                count++;
        }
    }
    if(count==0)
        printf("no");
}