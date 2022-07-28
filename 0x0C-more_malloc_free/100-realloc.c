#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory using malloc and free
 *
 * @ptr: pointer to the old memory
 * @old_size: size of the old memory
 * @new_size: size of the new reallocated memory
 *
 * Return: pointer to new memory or NULL if it fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new, *new_ptr;
	unsigned int i = 0;

	if (new_size == old_size) /* keep old memory if size is same */
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);

		if (ptr == NULL)
			return (NULL);

		return (ptr);
	}

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	new = malloc(new_size);

	new_ptr = ptr;

	if (old_size > new_size)
		old_size = new_size;

	for (i = 0; i < old_size; i++)
		new[i] = new_ptr[i];

	free(ptr);

	return (new);
}
