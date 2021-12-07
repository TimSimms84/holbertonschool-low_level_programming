#include "list.h"

/**
 * print_dlistint - prints elements of dbly lnkd list
 *
 * @h: nodes
 *
 * Return: num of nodes
 */


size_t print_dlistint(const dlistint_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodeCount++;
		h = h->next;
	}
	return (nodeCount);
}

