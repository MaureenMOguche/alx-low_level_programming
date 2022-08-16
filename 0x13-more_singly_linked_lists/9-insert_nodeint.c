#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to the first element
 * @idx: index where new element should be added
 * @n: element that should be added.
 * Return: address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int a = 0;

	/* assign memory for new node element */
	newnode = malloc(sizeof(listint_t));

	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;

	/* points the new node to the next element after the idx element */
	temp = *head;
	while (temp)
	{
		if (a == idx)
		{
			newnode->next = temp;
		}
		temp = temp->next;
		a++;
	}

	return (newnode);
}
