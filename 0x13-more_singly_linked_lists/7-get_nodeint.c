#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int a = 0, count = 0;

	temp = head;

	if (head == NULL)
	{
		return NULL;
	}

	while(temp)
	{
		temp = temp->next;
		count++;

		if (index > count)
		{
			return (NULL);
		}
	}
	while (a < index)
	{
		temp = temp-> next;
	}
	return (temp);
}
