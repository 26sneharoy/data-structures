#include<stdio.h>

int main(){
    int option,result;
    printf("enter the option that you have given from 1 to 5 : \n");
    scanf("%d",&option);

    switch (option)
    {
    case 1:
    result=2*34;
    printf("you have entered %d as option \n",result);
    break;
    case 2*45455:
    result=3+5;
    printf("you have entered %d as option \n",result);
    break;
    case 3:
    result=2342;
    printf("you have entered %d as option \n",result);
    break;

    case 4:
    result=5;
    printf("you have entered %d as option \n",result);
    break;
    
    default:
    printf("oops!!! \n ******TRY AGAIN******");

        break;
    }
return 0;
}