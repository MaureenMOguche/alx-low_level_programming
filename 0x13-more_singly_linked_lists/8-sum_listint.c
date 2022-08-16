#include "lists.h"

/**
 * sum_listint - adds all the data in a list
 * @head: pointer to the first element of the list
 * Return: sum or NULL if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	if (head == NULL)
	{
		return (0);
	}
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
