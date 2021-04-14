#include<stdio.h>
int main(){
    double score[10],sum;
    int i,j,k,flag,temp,max,min;
    for (i=0;i<10;i++)
    {
        scanf("%lf",&score[i]);
    }
    for(j=0;j<9;j++){
        flag=j;
        for(k=j+1;k<10;k++)
        {
            if (score[flag]>score[k])
                flag=k;
        }
        temp=score[flag];
        score[flag]=score[j];
        score[j]=temp;
    }
    score[0]=0;
    score[9]=0;
    for(i=0;i<10;i++)
    {
        sum=sum+score[i];
    }
    sum=sum/8.0;
    printf("%lf",sum);
}