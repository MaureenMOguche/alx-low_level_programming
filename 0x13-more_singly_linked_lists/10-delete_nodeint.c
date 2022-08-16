#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: pointer to the pointer to the first node
 * @index: index of the element to be deleted
 * Return: 1 if successful and -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i = 0;

	current = *head;
	prev = *head;
	if (*head == NULL)
		return (-1);

	else if (index == i)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}
	else
	{
		while (index != i)
		{
			prev = current;
			current = current->next;
			index--;
		}
		prev->next = current->next;
		free(current);
		current = NULL;
	}

	return (1);
}
