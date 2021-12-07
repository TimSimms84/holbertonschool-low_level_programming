#include "lists.h"

/**
 *add_dnodeint_end - adds node at end of dbl lnkd list
 * @head: pnt to list
 * @n: int to add to node
 * Return: newnode
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head, *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newnode;
	newnode->prev = temp;

	return (newnode);
}

