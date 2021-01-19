#include<stdio.h>

int main(){

    //65-90 capslock ,97-122

    char a;
    printf("enter the alphabet \n");
    scanf("%c",&a);

    if(a<=90 && a>=65)
    {
        printf("the alphabet is uppercase\n");

    }
    else
    {
         printf("the alphabet is lowercase\n");
        /* code */
    }
    
return 0;
}