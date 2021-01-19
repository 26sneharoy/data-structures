//insertion at begining  in linked list;

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * next;

};
void display (struct node * ptr){
    
    while (ptr !=NULL){
        printf("%d \n",ptr->data);
        ptr=ptr->next;

    }
}
  

  // insertion at first;
   struct node * insertionatfirst(struct node * head,int data){
       struct node *ptr =(struct node *)malloc(sizeof(struct node));
       ptr->next=head;
       ptr->data=data;
       return ptr;
   }

int main(){
    struct node * head;
    struct node * first;
    struct node * second;
    struct node * third;

     
      head = (struct node *)malloc (sizeof(struct node));
        first  = (struct node *)malloc (sizeof(struct node));
       second = (struct node *)malloc (sizeof(struct node));
       third  = (struct node *)malloc (sizeof(struct node));

    head ->data =34;
    head ->next= first;

    first ->data =78;
    first->next=second;

    second->data =90;
    second->next=third;

    third ->data =67;
    third->next=NULL;
     
     display(head);
     head =insertionatfirst(head,12);
     printf("after insertion is : \n");
     display(head);

return 0;
}