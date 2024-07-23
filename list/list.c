#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
} Node;

int main (void)
{
	Node *ptr;
	
	ptr = malloc(sizeof(Node));
	ptr->data = 1;
	ptr->next = malloc(sizeof(Node));
	ptr->next->data = 2;
	ptr->next->next = malloc(sizeof(Node));
	ptr->next->next->data = 4;
	ptr->next->next->next = NULL;
{
	Node *p;
	p = malloc(sizeof(Node));
	p->data = 3;	
	p->next = ptr->next->next;
	ptr->next->next = p;
}
{
	Node *p;
	p = ptr->next;	
	ptr->next = p->next;
	free(p);
}
{
	Node *p;
	p = ptr;
	while (p ) {
		printf("%d, ", p->data);
		p = p->next;
	}
	printf("\n");
}	
	return 0;
}
