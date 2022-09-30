#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index specified
 * @index: idex of element to be deleted
 * @head: pointer to the head of the list
 * Return 1 if success, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp, *temp2, *temp3;

	if (*head == NULL)
		return (-1);

	temp = *head;

	while (temp != NULL)
	{
		count++;
		
		if (index > count)
			return (-1);

		if (count == index)
		{
			temp2 = temp->prev;
			temp3 = temp->next;
			
			temp2->next = temp3;
			temp3->prev = temp2;
			free(temp);
		}
		temp = temp->next;
	}
	return (1);
}
