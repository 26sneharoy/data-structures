#include<stdio.h>

int main(){
    int math,science,social;
    float total;

    printf("enter your marks : math \n");
    scanf("%d",&math);
    printf("enter your marks : science \n");
    scanf("%d",&science);
    printf("enter your marks : social \n");
    scanf("%d",&social);

    total=(float)(math+science+social)/3;

    if( total>40 && math>33&&science>33&& social>33){
        printf("you have passed the exams with  total %fpercentage \n", total);

    }
 else 
 {
     printf("you have failed the exams with  total %f percentage \n",  total);
 }
   // printf("total is %f ",total);

return 0;
}