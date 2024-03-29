#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data; 
	struct Node* next; 
}; 


void printList(struct Node* node)
{
	while (node != NULL) {
		printf(" %d ", node->data);
		node = node->next; 
	}
} 



int main()
{
	struct Node* head = NULL; 
	struct Node* second = NULL; 
	struct Node* third = NULL; 

	head = (struct Node*) malloc(sizeof(struct Node)); 
	second = (struct Node*) malloc(sizeof(struct Node)); 
	third = (struct Node*) malloc(sizeof(struct Node)); 

	head->data = 1; 
	head->next = second; 

	head->data = 2; 
	head->next = third; 

	head->data = 3; 
	head->next = NULL; 

	printList(head); 

	return 0; 
}
