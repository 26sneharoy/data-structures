#include<stdio.h>

int main(){
    int num,i,factorial=1;

    printf("enter the number : \n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        factorial*=i;
        printf("fac=%d \n",factorial);

    }
       printf("the factorial of the given number is : %d\n",factorial);

return 0;
}