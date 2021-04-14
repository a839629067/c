#include<stdio.h>
int main() 
{
    char string1[20],string2[20];
    int i=0,j=0;
    scanf("%s",string1);
    scanf("%s",string2); 
    while(string1[i]!='\0')
    i++;
    while(string2[j]!='\0')
    string1[i++]=string2[j++];
    string1[i]='\0'; 
    printf("\n%s",string1);
    return 0;
}
