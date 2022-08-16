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

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
	{
		return (NULL);
	}

	newnode->n = n;
	temp = *head;
	while (a < idx)
	{
		temp = temp->next;
		a++;
	}
	temp = newnode;
	return (temp);
}
