#include<stdio.h>

int main(){
    int num,i,result;

    printf("enter the number ");
    scanf("%d",&num);
    printf("-------MULTIPLICATION--------\n");

    for( int i=10;i>0;i--){
        result=num*i;
        printf("%d  x  %d  =  %d \n",num,i,result);
    }
return 0;
}