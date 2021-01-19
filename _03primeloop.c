#include<stdio.h>

int main(){
    int num,res=0,i;
    printf("enter the number\n");
    scanf("%d",&num);
    for(i=1;i<num;i++){
        res=num%i;
        
        if(res==0){
            printf("the given  number %d is not a prime number",num);
            break;
        }
        else{
            printf("the given  number %d is  a prime number",num);
            
        }
    }
return 0;
}