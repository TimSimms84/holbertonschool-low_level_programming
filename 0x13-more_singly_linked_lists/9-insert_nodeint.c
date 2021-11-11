#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at idx
 * @head: double pnt to list
 * @n: data for the new node
 * @idx: where to insert
 * Return: inserted node
 *
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *currentNode = *head, *newNode = malloc(sizeof(listint_t));

	if (currentNode == NULL || newNode == NULL)
		return (NULL);
	if (idx != 0)
	{
		newNode->n = n;
		for (i = 0; i < idx - 1; i++)
		{
			currentNode = currentNode->next;
		}
		if (currentNode == NULL)
			return (NULL);
	}
	if (idx == 0)
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	newNode->next = currentNode->next;
	currentNode->next = newNode;
	return (newNode);
}

