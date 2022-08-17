#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - function that prints the elements of a list
 * @head: pointer to list
 * Return: number of nodes. Exits with 98 on failure
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *one = head, *two = head;

	if (head == NULL)
		exit(98);

	while (one && two && two->next && head)
	{
		one = one->next;
		two = two->next->next;
		if (one == two)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	head = NULL;
	return (nodes);
}
