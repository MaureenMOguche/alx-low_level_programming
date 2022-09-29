#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the header of a list
 * @idx: index of the list to insert new element
 * @n: element to insert in list
 * Return: newnoode or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *temp, *newnode;

	if (*h == NULL)
	{
		return (NULL);
	}

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;

	temp = *h;
	while (temp != NULL)
	{
		count++;

		if (count == idx)
		{
			newnode->prev = temp;
			newnode->next = temp->prev;
			temp->prev = newnode;
		}
		temp = temp->next;
	}
	return (newnode);
}
