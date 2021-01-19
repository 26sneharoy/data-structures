//creation of linked list and traversal;
#include<stdio.h>
#include<stdlib.h>//since we are using malloc;

struct node //creation of struct;
{
    int data;
    struct node * next;

};  //in the creation of struct semicolon is important;

void linkedlist_traversal(struct node *ptr){
   while(ptr !=NULL){
    printf("element : %d \n",ptr->data);
    ptr=ptr->next;

   }
}

int main(){
    struct node * head;
    struct node * second;
    struct node * third;
    /*
        data|next
          __ __          __ __         __ __
         |__|__|  --->  |__|__|  ---> |__|__|
           head           second       third
             ^               ^             ^
             :               |             :
                            ptr

    */
    
   //allocating memory for nodes in heap by dynamic memory allocation;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // inserting data in the node and linking the nodes  ;
    head ->data =8;
    head ->next =second;

     second ->data =11;
    second ->next =third;

     //terminating the list at the third node;
     third ->data =14;
    third ->next =NULL;

    linkedlist_traversal(head) ;  


return 0;
}