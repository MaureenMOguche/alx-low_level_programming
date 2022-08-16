#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to the first element
 * @idx: index where new element should be added
 * @n: element that should be added.
 * Return: address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int a = 0, count = 0;

	/* assign memory for new node element */
	newnode = malloc(sizeof(listint_t));

	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;

	/* count number of elements in list */
	temp = *head;
	while (temp)
	{
		count++;
		temp = temp->next;
	}

	/* check if index is greater than no. of elements */
	if (a > count)
	{
		return (NULL);
	}
	else
	{
		temp = *head;
		while (a < idx) /* iterate to idx and insert new node */
		{
			temp = temp->next;
			a++;
		}
		temp = newnode;
		return (temp);
	}
}
