#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to the pointer to the head node
 * Return: head node's data or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int td;

	temp = (*head);

	if (*head == NULL)
	{
		return (0);
	}
	temp = temp->next;
	td = (*head)->n;
	free(*head);
	*head = temp;

	return (td);
}
