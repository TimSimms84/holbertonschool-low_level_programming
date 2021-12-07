#include "lists.h"

/**
 * dlistint_len - returns number of nodes
 * @h: nodes
 * Return: nodecount
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodeCount = 0;
	const dlistint_t *temp = h;

	if (h == NULL)
		return (0);

	while (temp != NULL)
	{
		nodeCount++;
		temp = temp->next;
	}
	return (nodeCount);
}



