#include<stdio.h>

int main(){
    //int r1,r2,c1,c2;
    int arr[2][3];
    int i,j;
    for (i=0;i<=2;i++){
        for (j=0;j<=3;j++){
            printf("the element in the position in arr[%d][%d] :\n ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
     for (i=0;i<=2;i++){
        for (j=0;j<=3;j++){
            printf("%d",arr[i][j]);
            if(arr[0][0]==0){
                printf("true");
            }
            else{
                printf("false");
            }
        }
     }

return 0;
}