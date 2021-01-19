#include<stdio.h>
int binarysearch(int arr[],int size,int element){
    int i,mid,low,high;
    low=0;
    high=(size-1);
    while(low<=high){
    
   int mid=(low+high)/2;
    
        if (arr[mid]==element){
            printf("wooho!!you have found the element %d in the index %d\n",element,mid);
            return mid;
        }
         if (arr[mid] <element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    

    }
    return -1;
    
    
}
int main(){
    int arr[]={2,3,45,66,76,546,775,967};
    int size,element=76,mid;
    size=sizeof(arr)/sizeof(arr[0]);
    
          int search=  binarysearch(arr,size,76);
          printf("%d is the element and %d is the index ",element,search);
    
return 0;
}