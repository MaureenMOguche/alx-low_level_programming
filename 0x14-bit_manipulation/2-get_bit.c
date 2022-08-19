#include "main.h"

/**
 * get_bit - returns the value of a bit at index
 * @n: number from which the bit would be gotten
 * @index: index of the bit to be gotten
 * Return: The value of the bit or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);

	if ((n & max))
		return (1);
	else
		return (0);
}
