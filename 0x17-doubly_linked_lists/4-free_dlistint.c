#include "lists.h"
#include <stdio.h>

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *freed;

	temp = freed = head;
	while (temp != NULL)
	{
		if (temp->next == NULL)
		{
			freed = temp;
		}
		temp = temp->prev;
		free(freed);
	}
	free(temp);
}
