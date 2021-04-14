#include<stdio.h>
int main(){
    int b[3][4],i,j,positive=0,negative=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&b[i][j]);
            if (b[i][j]>=0)
                positive=positive+b[i][j];
            else
                negative=negative+b[i][j];
        }
    }
    printf("%d,%d",positive,negative);
}