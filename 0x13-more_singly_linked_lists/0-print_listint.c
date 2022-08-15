#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: pointer to the start of the list
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count_nodes = 0;
	const listint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count_nodes++;
		temp = temp->next;
	}
	return (count_nodes);
}
