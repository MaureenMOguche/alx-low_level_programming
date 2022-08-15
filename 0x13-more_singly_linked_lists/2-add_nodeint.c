#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a list
 *
 * @head: pointer to the pointer to the first element
 * @n: element to be added to the beginning of list
 * Return: pointer to new node element;
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	if (*head == NULL)
	{
		return (NULL);
	}
	return (newnode);
}
