#include "lists.h"


/**
 * get_dnodeint_at_index - gets node at index
 * @index: index of node
 * @head: pntr to list
 * Return: node at index or NULL
 *
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head && i < index)
	{
		head = head->next;
		i++;
	}

	if (head != NULL)
		return (head);
	else
		return (NULL);
}
