#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints the elements of a linked list
 * @h: header of the list
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (h != NULL)
		{
			count++;
			printf("%d\n", h->n);
			h = h->next;
		}
		return (count);
	}
}
