#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: array to be allocated memory
 * @size: size of array
 * Return: NULL if failed
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	ptr = malloc(nmemb * sizeof(size));

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
