#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: binary to be converted
 * Return: the converted number or 0;
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, sum = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else
		{
			sum *= 2;
			if (b[i] == '1')
				sum += 1;
		}
	}
	return (sum);
}
