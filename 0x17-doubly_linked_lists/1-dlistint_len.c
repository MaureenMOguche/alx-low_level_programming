#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head pointer to list
 * Return: number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
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
			h = h->next;
		}
		return (count);
	}
}
