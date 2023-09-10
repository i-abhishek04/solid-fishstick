#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void trav(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->next;
        printf("\n");
    }
}

struct node *insIndex(struct node *head, int index, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    ptr->data = data;

    if (index == 0)
    {
        ptr->next = head;
        head = ptr;
        return head;
    }
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct node * delIndex(struct node *head, int index){
    // struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i=0;
    while(i!=index-1){
        p= p->next;
        i++;
    }
    struct node *q=p->next;
    p->next=q->next;
    free(q);
    return head;
}
int main()
{
    int data, index;
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 4;
    head->next = second;

    second->data = 8;
    second->next = third;

    fourth->data = 54;
    fourth->next = NULL;

    third->data = 98;
    third->next = fourth;

    printf("List before modification:\n");
    trav(head);

    printf("Enter the index: ");
    scanf("%d", &index);

    // printf("Enter the number to insert: ");
    // scanf("%d", &data);

    // head = insIndex(head, index, data);
    head = delIndex(head, index);
    printf("List after modification:\n");
    trav(head);

    return 0;
}