#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end - inserts a node at end of a list
 * @head: pointer to the head pointer
 * @n: element to be added
 * Return: address of new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;

	if (*head == NULL)
	{
		(*head) = newnode;
	}
	else
	{
		temp = *head;

		while (temp != NULL)
		{
			if (temp->next == NULL)
			{
				temp->next = newnode;
				newnode->prev = temp;
				newnode->next = NULL;
				temp = newnode;
			}
			temp = temp->next;
		}
	}
	return (newnode);
}
