#include "list.h"

int main (void)
{
	List list;
	initList(&list);
	
	insertFirstNode(&list, 4);
	printList(&list);
	insertFirstNode(&list, 2);
	printList(&list);
	insertFirstNode(&list, 1);
	printList(&list);
	
	insertNode(&list, 2, 3);
	printList(&list);
	
	deleteNode(&list, 2);
	printList(&list);
	
	cleanupList(&list);
	return 0;
}
