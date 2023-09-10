#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *prev;
    int data;
    struct node *next;
} dll;

void trav(dll *head)
{
    int nodeNumber = 0;
    printf("The list in forward order \n");
    do
    {
        printf("The value in node %d is %d\n", ++nodeNumber, head->data);
        // if(head->next != NULL)
            head = head->next;
    } while (head->next != NULL);

    printf("The list in backward order \n");
    do
    {
        printf("The value in node %d is %d\n", nodeNumber--, head->data);
        head = head->prev;
    } while (head->prev != NULL);
}

int main()
{
    dll *n1 = (dll *)malloc(sizeof(dll));
    dll *n2 = (dll *)malloc(sizeof(dll));
    dll *n3 = (dll *)malloc(sizeof(dll));
    dll *n4 = (dll *)malloc(sizeof(dll));

    n1->prev = NULL;
    n1->data = 12;
    n1->next = n2;

    n2->prev = n1;
    n2->data = 15;
    n2->next = n3;

    n3->prev = n2;
    n3->data = 20;
    n3->next = n4;

    n4->prev = n3;
    n4->data = 25;
    n4->next = NULL;

    trav(n1);

    return 0;
}