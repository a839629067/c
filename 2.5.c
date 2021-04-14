#include<stdio.h>
int main()
{
    int s;
    printf("input seconds\n");
    scanf("%d",&s);
    printf("%dh %dm %ds",s/3600,s/60%60,s%60);
    return 0;
}