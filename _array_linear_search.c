#include<stdio.h>
int linearsearch(int arr[],int size,int element)//passing the parameters;
{
    for (int i=0;i<size;i++){
        if(arr[i]==element){
            printf("found the element searching for :%d in the index %d",element, i);
            return 0;
        }
        else{
            printf("!!!NOT FOUND in the index : %d \n",i);

        }

        
    }
    return 1;
}

int main(){


int arr[]={54,22,25,67,25563,36,365};
int size  =sizeof(arr)/sizeof(arr[0]);//to find the size of arr;
printf("%d is the size\n ",size );
linearsearch(arr,size,500); //passing the arguments;


return 0;
}