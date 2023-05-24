#include "monty.h"
/**
* free_stack - Frees a linked list
* @head: Start of list
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
