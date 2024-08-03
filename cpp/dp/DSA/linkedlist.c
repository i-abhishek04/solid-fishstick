#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int val; 
    // int a;
    struct node* next;
}NODE;

void printNode(NODE* n)
{
    int count=1;
     while(n!=NULL)
    {
        printf("node%d = %d \n",count++,n->val);
        // printf("%d \n",n->a);
        n=n->next;
    }
   
}

NODE* addFirst(NODE* ptr, int a)
{
    NODE* first=(NODE*)malloc(sizeof(NODE));
    first->val=a;
    first->next=ptr;
    return first;
}

int main()
{
    NODE *head;
    NODE* n1=(NODE*)malloc(sizeof(NODE));
    NODE* n2=(NODE*)malloc(sizeof(NODE));
    NODE* n3=(NODE*)malloc(sizeof(NODE));
    head=n1;
    n1->val=10;
    // n1->a=10;
    n1->next=n2;
    n2->val=14;
    // n2->a=10;
    n2->next=n3;
    n3->val=23;
    // n3->a=10;
    n3->next=NULL;


    printNode(n1);

    printf("Enter value you want to add in the start : ");
    int num;
    scanf("%d",&num);
    head=addFirst(head, num);
    printNode(head);
    return 0;
}