#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * next;

};

void display (struct node * ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node * insertion_end (struct node *head,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    
    struct node * p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next = ptr;
    ptr ->data=data;
    ptr->next=NULL;
    return head;
}

int main(){
    struct node * head =(struct node *)malloc(sizeof(struct node));
    struct node * first =(struct node *)malloc(sizeof(struct node));
    struct node * second=(struct node *)malloc(sizeof(struct node));
    struct node * third =(struct node *)malloc(sizeof(struct node));

    head ->data=88;
    head ->next =first  ;

     first ->data=4;
    first ->next = second ;

     second ->data=56;
    second ->next = third ;

    third ->data=7;
    third->next = NULL ;

    display(head);
    insertion_end(head,90);
    printf("after insertion at end : \n");
    display(head);
     
return 0;
}