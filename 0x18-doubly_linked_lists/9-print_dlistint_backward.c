#include "lists.h"

/**
 * print_dlistint_backward - prints dbl lnk lst backwards
 * @h: pntr to list
 * Return: number of nodes
 *
 */



size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t node_count = 1;

	if (h == NULL)
		return (0);

	while (h->next)
		h = h->next;
	printf("%d\n", h->n);
	h = h->prev;
	printf("%d\n", h->n);
	node_count++;
	while (h->prev)
	{
		h = h->prev;
		printf("%d\n", h->n);
		node_count++;
	}
	return (node_count);
}

