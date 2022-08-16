#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: pointer to the first element
 * @n: element to be added
 * Return: address of new node
 */

listint_t *add_nodeint_end(listint_t **head, int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	temp = *head;
	if (*head == NULL)
	{
		*head = newnode;
		temp = newnode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}

	return (newnode);
}
