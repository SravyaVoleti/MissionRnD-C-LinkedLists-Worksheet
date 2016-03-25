/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {

	struct node *ptr, *preptr;
	int count = 1;
	ptr = head;
	preptr = head;

	if (head == NULL || K < 0)
		return NULL;
	
	if (K == 0 || K == 1)
		return NULL;
	
	while (ptr->next != NULL) {

		preptr = ptr;
		ptr = ptr->next;
		count++;
		if (!(count % K)) 
			preptr->next = ptr->next;

		}
	

	return head;
}