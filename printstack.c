#include "monty.h"
/**
 * f_pall - weites the stack to stdout
 * @head: head of list
 * @counter: Counter
 * Return: Void
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
