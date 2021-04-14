#include<stdio.h>
int main(){
    char text[3][80];
    int big=0,small=0,num=0,space=0,others=0,i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<80;j++)
        {
            if((text[i][j]>=65) && (text[i][j]<=90))
                big++;
            else if((text[i][j]>=97) && (text[i][j]<=122))
                small++;
            else if((text[i][j]>=48) && (text[i][j]<=57))
                num++;
            else if(text[i][j]==32)
                space++;
            else
                others++;
        }
    }
    printf("%d,%d,%d,%d,%d",big,small,num,space,others);
}