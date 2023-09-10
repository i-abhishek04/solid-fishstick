#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node * next;
} ll;


ll * deleteFirst(ll * head)
{
	ll * ptr = head;
	head = head->next;
	free(ptr);
	return head;
}

ll * deleteAtIndex(ll * head, int index){
	ll * p = head;
	ll * q = head->next;
	for(int i = 0; i<index - 1; i++){
		p = p->next;
		q = q->next;
	}
	p->next = q->next;
	free(q);
	return head;
}

ll * deleteElement(ll * head, int data){
	ll * p = head;
	ll * q = head->next;
	while(q->data != data && q->next != NULL){
		p = p->next;
		q = q->next;
	}
	if(q->next == NULL && q->data == data){
		p->next = q->next;
		free(q);
	}
	else if(q->next != NULL){
		p->next = q->next;
		free(q);
	}
	return head;
}

void trav(ll* ptr)
{
	int c = 1;
	while(ptr != NULL)
	{
		printf("Data in node %d is %d\n", c++, ptr->data);
		ptr = ptr->next;
	}
}

int main()
{
	ll *n1, *n2, *n3, *n4;
	n1 = (ll*)malloc(sizeof(ll));
	n2 = (ll*)malloc(sizeof(ll));
	n3 = (ll*)malloc(sizeof(ll));
	n4 = (ll*)malloc(sizeof(ll));
	
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
	
	printf("Linked list before deletion \n");
	trav(n1);

	// n1 = deleteFirst(n1);
	// n1 = deleteFirst(n1);
	// n1 = deleteAtIndex(n1, 3);
	n1 = deleteElement(n1, 47);
	printf("Linked list after deletion \n");
	trav(n1);
	
	return 0;
}
