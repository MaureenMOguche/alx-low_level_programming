#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_list
 * @head: pointer to the pointer to the first element
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
