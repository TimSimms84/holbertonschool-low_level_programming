#include "lists.h"

/**
 * nodeexist - makes sure index isn't higher than node counts
 * @h: pnts to head
 * @index: which node to delete
 * Return: 0 if success, -1 if not.
 */
int nodeexist(dlistint_t *h, unsigned int index)
{
	dlistint_t *temp = h;
	unsigned int i = 0;

	while (temp)
	{
		i++;
		temp = temp->next;
	}
	if (index >= i)
		return (-1);
	else
		return (0);

}


/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: pnts to head
 * @index: which node to delete
 * Return: 1 if success, null if not.
 */


int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (!head)
		return (-1);

	if (nodeexist(temp, index) != 0)
		return (-1);

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);

	return (1);

}
