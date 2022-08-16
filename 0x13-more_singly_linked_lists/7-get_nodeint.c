#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to the first element
 * @index: inded of element to be returned.
 * Return: nth node of the list or null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int a = 0;

	temp = head;

	if (head == NULL)
	{
		return (NULL);
	}

	/* move temp to the position of index */
	while (temp)
	{
		if (a == index)
		{
			return (temp);
		}
		temp = temp->next;
		a++;
	}

	return (NULL);
}
