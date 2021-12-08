#include "lists.h"

/**
 * sum_dlistint - sums all data of dbl lnkd list
 * @head: pntr to list
 * Return: sum
 */


int sum_dlistint(dlistint_t *head)
{
	unsigned int x = 0;

	if (!head)
		return (0);

	while (head->next != NULL)
	{
		x = x + head->n;
		head = head->next;
	}
	x = x + head->n;
	return (x);
}
