#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *insertion_node(struct node *head, int data, struct node *previous_node)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    ptr->data = data;
    ptr->next = previous_node->next;
    previous_node->next = ptr;
    return head;
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));

    struct node *first = (struct node *)malloc(sizeof(struct node));

    struct node *second = (struct node *)malloc(sizeof(struct node));

    struct node *third = (struct node *)malloc(sizeof(struct node));

    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 99;
    head->next = first;

    first->data = 9;
    first->next = second;

    second->data = 45;
    second->next = third;

    third->data = 22;
    third->next = fourth;

    fourth->data = 12;
    fourth->next = NULL;

    display(head);
    head = insertion_node(head, 66, third);
    printf("after insertion after a node is : \n");
    display(head);

    return 0;
}