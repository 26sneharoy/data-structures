#include<stdio.h>

int main(){
int mult,i,num;
int sum=0;
printf("enter the num \n");
scanf("%d",&num);
   for(i=1;i<=10;i++)
   {
      mult=i*num;
       printf("%d  x  %d  =  %d\n",num,i,mult);
      sum=sum+mult;
     // printf("sum",sum);
   }
   printf("sum is %d",sum);
return 0;
}