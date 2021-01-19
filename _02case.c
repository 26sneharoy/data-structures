#include<stdio.h>

int main(){
    int marks;

    printf("enter your review marks \n");
    scanf("%d",&marks);

    switch(marks)
    {
        case 1:
        printf("you have entered review mark is 1\n" );
        break;
        case 2:
         printf("you have entered review mark is 2\n");
         break;

          case 3:
         printf("you have entered review mark is  3\n" );
         break;
          case 4:
         printf("you have entered review mark is 4\n");
         break;
          case 5:
         printf("you have entered review mark is 5\n");
         break;
         
         default:
         printf("you have entered out of choice");


       }   return 0;
}