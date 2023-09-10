#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}cll;

void trav(cll *head)
{
    cll * p = head;
    do{
        printf("%d", p->data);
        p = p->next;
        printf("\n");
    }while (p != head);
}

cll * insertAtFirst(cll * head, int data){
    cll * new = (cll *)malloc(sizeof(cll));
    cll * ptr = head->next;
    while(ptr->next != head){
        ptr = ptr->next;
    }
    new->data = data;
    new->next = head;
    ptr->next = new;
    head = new;
    return head;
}

int main()
{
    int data, index;
    cll *head = (cll *)malloc(sizeof(cll));
    cll *second = (cll *)malloc(sizeof(cll));
    cll *third = (cll *)malloc(sizeof(cll));
    cll *fourth = (cll *)malloc(sizeof(cll));

    head->data = 4;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 98;
    third->next = fourth;

    fourth->data = 54;
    fourth->next = head;

    printf("Circular Linked list before insertion\n");
    trav(head);

    head = insertAtFirst(head, 32);

    printf("Circular Linked list after insertion\n");
    trav(head);

    return 0;
}