#include "lists.h"

/**
 * sum_dlistint - sums all the data of a list
 * @head: pointer to the first node of list
 * Return: sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		temp = head;
		while (temp != NULL)
		{
			sum += temp->n;

			temp = temp->next;
		}
		return (sum);
	}
}
