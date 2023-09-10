#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node * next;
} ll;

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
	
	trav(n1);
	return 0;
}
