#include<stdio.h>

int main(){

    int year,leap=0;
    
    printf("enter the year");
    scanf("%d",&year);

    leap=(year%4);
    

    if(leap==0){
        printf("the year is leap year");
    }
else
{
   printf("the year is not leap year");  /* code */
}


    
return 0;
}