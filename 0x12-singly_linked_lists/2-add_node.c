#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node at the begining of a linked
 * @head: pointer to the head struct
 * @str: pointer to string
 * Return: pointer to new head of list, NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
