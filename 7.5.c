#include<stdio.h>
#include<string.h>
int bubblesort(char (*a)[10])
{   char t[10];
    for(int j=0;j<9;j++)
        for(int i=0;i<9-j;i++)
            if(strcmp(*(a+j),*(a+j+1)))
            {
                strcpy(t,*(a+i));
                strcpy(*(a+i),*(a+i+1));
                strcpy(*(a+i+1),t);
            }
}

int main(){
    char a[10];
    for(int i=0;i<10;i++)
        gets(&a[i]);
    bubblesort(&a);
    for(int i=0;i<10;i++)
        puts(&a[i]);
    

}