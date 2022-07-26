#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: size of the array
 * @c: caracter to initiialize the array
 *
 * Return: NULL or pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr_c;

	ptr_c = malloc(size * sizeof(c));

	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		if (ptr_c == NULL)
		{
			return (NULL);
		}

		*(ptr_c + i) = c;
	}
	return (ptr_c);
}
