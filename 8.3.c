#include<stdio.h>
#define CHANGE 1
int main(){
    int i;
    char s1[20];
    gets(s1);
    if(CHANGE)
    {   for(int m=0;m<20;m++)
        if(s1[i]!='\0')
        {
            if(s1[i]>='a' && s1[i]<='z'|| s1[i]>='A' && s1[i]<='Z')
            s1[i]++;
            else
            if (s1[i]=='z' || s1[i] == 'Z')
            {
                s1[i]-=25;
            }
                            
        }
    }
    puts(s1);
}