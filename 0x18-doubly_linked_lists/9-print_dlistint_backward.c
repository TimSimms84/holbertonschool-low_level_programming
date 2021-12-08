#include "lists.h"

/**
 * print_dlistint_backward - prints dbl lnk lst backwards
 * @h: pntr to list
 * Return: number of nodes
 *
 */



size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t node_count;
	const dlistint_t *temp = h;

	if (h == NULL)
		return (0);

	while (temp->next)
		temp = temp->next;

	for (node_count = 0; temp != NULL; temp = temp->prev)
	{
		printf("%d\n", temp->n);
		node_count++;
	}
	return (node_count);
}

