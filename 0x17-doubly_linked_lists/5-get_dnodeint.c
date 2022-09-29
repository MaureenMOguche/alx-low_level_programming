#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - retuns the nth node of a list
 * @head: pointer to the first node of list
 * @index: index of element to be returnedi
 * Return: the node at the index or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	temp = head;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;

		if (count == index)
		{
			return (temp);
		}
	}
	return (NULL);
}
