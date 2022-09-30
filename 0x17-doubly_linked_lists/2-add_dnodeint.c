#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: pointer to the head pointer
 * @n: element to add to list
 * Return: address of new element or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	else
	{
		newnode->n = n;
		newnode->next = *head;
		newnode->prev = NULL;
		*head = newnode;
	}

	return (newnode);
}
