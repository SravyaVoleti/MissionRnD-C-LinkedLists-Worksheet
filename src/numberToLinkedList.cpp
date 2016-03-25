/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {

	struct node *ptr, *root = NULL;

	int val = 0;

	if (N == 0) {
		ptr = (struct node *)malloc(sizeof(struct node *));
		ptr->num = val;
		ptr->next = NULL;
		root = ptr;
		return root;
}
	if (N < 0)
		N = N * -1;
	while (N > 0) {
		val = N % 10;
		ptr = (struct node *)malloc(sizeof(struct node *));
		ptr->num = val;
		ptr->next = root;
		root = ptr;
		N = N / 10;
	}


	return root;

	return NULL;
}