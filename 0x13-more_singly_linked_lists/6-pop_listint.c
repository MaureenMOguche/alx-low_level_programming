#include "lists.h"
#include <stdlib.h>

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int td;

	temp = *head;

	if (*head == NULL)
	{
		return (0);
	}
	temp = temp->next;
	td = *head ->n;
	free(*head);

	return (td);
}
