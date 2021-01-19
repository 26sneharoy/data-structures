#include<stdio.h>

int main(){
       
       int num,i,result=0;
    printf("enter the number whose multiplication table required :\n");
    scanf("%d",&num);

   for(int i=0;i<=10;i++){
         result=num*i;
          printf(" the mulplication of %d x%d = %d \n",num,i,result);
    

   }
       
return 0;
}