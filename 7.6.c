#include<stdio.h>
int main(){
    char *months[12]={"Jan","Feb","Mar","Apr","May","Aug","Sept","Oct","Nov","Dec"};
    int number;
    scanf("%d",&number);
    printf("%s",*(months+number));
    return 0;
}