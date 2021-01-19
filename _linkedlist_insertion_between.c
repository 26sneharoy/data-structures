#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
void display(struct node *ptr){
    while ( ptr !=NULL)
    {
        printf("%d\n" ,ptr->data);
        ptr=ptr->next;
    }
}
    
    struct node * insertionat_middle(struct node * head,int data,int index){
        struct node * ptr=(struct node *)malloc(sizeof(struct node));
        struct node * p=head;

        int i= 0;
        while(i!=(index-1))      //putting the value of p just before the index;
        {
            p=p->next;
            p++;
        }
        ptr->data=data;
        ptr->next=p->next;
        p->next =ptr;

        return head;
    }



int main(){
    struct node *head =(struct node*)malloc(sizeof(struct node));
    struct node *first =(struct node*)malloc(sizeof(struct node));
    struct node *second =(struct node*)malloc(sizeof(struct node));
    struct node *third =(struct node*)malloc(sizeof(struct node));

    head->data=89;
    head->next=first;
    
    first->data=78;
    first->next=second;

    second->data=90;
    second->next=third;

    third->data=753;
    third->next=NULL;
    
     display (head);
     printf("after insertion is : \n");
     insertionat_middle(head,45,1);
     display (head);

return 0;
}