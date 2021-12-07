#include "lists.h"

/**
 * add_dnodeint - adds dbly linked node at begining
 * @head: pntr to list
 * @n: int to add to node
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	/*head should be NULL first pass through */
	if (*head != NULL)
		(*head)->prev = newnode;
	*head = newnode;
	return (newnode);
}

