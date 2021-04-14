#include<stdio.h>
int main(){
    int a[5][5]={{0,0,1,0,0},{0,1,0,1,0},{1,0,0,0,1},{0,1,0,1,0},{0,0,1,0,0}};
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
        {
            if(a[i][j]==0)
            printf(" ");
            if(a[i][j]==1)
            printf("*");
        }
        printf("\n");
    }
}