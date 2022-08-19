#include "main.h"

/**
 * clear_bit - sets a bit to 0 at given index
 * @n: number form whose index bit would be set
 * @index: index to set bit at
 * Return: 1 if it worked, or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 1;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	max = ~(max << index);
	*n &= max;
	return (1);
}
