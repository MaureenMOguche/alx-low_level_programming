#include "main.h"

/**
 * get_bit - returns the value of a bit of a given index
 * @n: value from whose index, a bit would be returned
 * @index: the index of the value to be returned.
 * Return: bit value at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	int bit;
	
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	for (i = 0; n > 0; i++)
	{
		bit = n % 2;
		n = n / 2;
		if (i == index)
		{
			return (bit);
		}
	}
	return (-1);
}
