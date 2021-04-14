#include<string.h>
#include<stdio.h>
int main()
{
    int k,n;
    char s[20]="\0";
    gets(s);
    scanf("%d %d",&k,&n);
    int len=strlen(s);
    int out(char s[20],int k,int n,int len);
    out(s,k,n,len);
    return 0;
}
int out(char s[20],int k,int n,int len)
{   char sout[20]="\0";
    char stemp[20]="\0";
    for(int z=0;z<k;z++)
        sout[z]=s[z];
    puts(sout);
    for(int z=(k+n),x=k;z<=len;z++,x++)
        sout[x]=s[z];
    puts(sout);
    return 0;
}
