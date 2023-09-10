#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node * next;
}ll;

void trav(ll* ptr)
{
	int c = 1;
	while(ptr != NULL)
	{
		printf("Data in node %d is %d\n", c++, ptr->data);
		ptr = ptr->next;
	}
}

ll * insertAtHead(ll * head, int data)
{
	ll * ptr = (ll*)malloc(sizeof(ll));
	ptr->data = data;
	ptr->next = head;
	return  ptr;
}

ll * insertAtIndex(ll * head, int index, int data)
{
	ll * ptr = (ll*)malloc(sizeof(ll));
	ll * p = (ll*)malloc(sizeof(ll));
	int i = 1;
	p->next = head->next;
	while(i < index - 1)
	{
		p = p->next;
		i++;
	}
	ptr->data = data;
	ptr->next= p->next;
	p->next = ptr;
	return head;
}

ll * insertAtEnd(ll * head, int data)
{
	ll * ptr = (ll*)malloc(sizeof(ll));
	ll * p = (ll*)malloc(sizeof(ll));
	p->next = head->next;
	while(p->next != NULL)
	{
		p = p->next;
	}
	ptr->data = data;
	ptr->next = NULL;
	p->next = ptr;
	return head;
}

void insertAfter(ll * node, int data)
{
	ll * ptr = (ll*)malloc(sizeof(ll));
	ptr->data = data;
	ptr->next = node->next;
	node->next = ptr;
}

int main()
{
	ll *ins, *n1, *n2, *n3, *n4;
	n1 = (ll*)malloc(sizeof(ll));
	n2 = (ll*)malloc(sizeof(ll));
	n3 = (ll*)malloc(sizeof(ll));
	n4 = (ll*)malloc(sizeof(ll));
	//ins = (ll*)malloc(sizeof(ll));

	//Linking first and second node
	n1->data = 12;
	n1->next = n2;
	
	//Linking second and third node
	n2->data = 13;
	n2->next = n3;
	
	//Linking third and fourth node
	n3->data = 34;
	n3->next = n4;
	
	//Terminating
	n4->data = 47;
	n4->next = NULL;
	
	printf("\n\nLinked list before insertion\n\n");
	trav(n1);

	//ins->data = 101;
	
	printf("\n\nLinked list after insertion at beginning\n\n");
	n1 = insertAtHead(n1, 101);
	trav(n1);
	printf("\nLinked list after insertion at a certain index\n");
	n1 = insertAtIndex(n1, 3, 23);
	trav(n1);

	n1 = insertAtEnd(n1, 65);
	printf("\nList after insertion at end\n");
	trav(n1);

	insertAfter(n4, 32);
	printf("\nList after insertion after node n4\n");
	trav(n1);
	return 0;
}

