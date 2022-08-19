#include "main.h"

/**
 * flip_bits - function that gets number of bits needed to flip
 * @n: How many bit flips are needed to equal m for n
 * @m: The number to set other equal
 * Return: The number of fliped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	unsigned long int xor = (n ^ m);
	unsigned long int max = 1, i;

	for (i = 0; i < (sizeof(xor) *8); i++)
	{
		if (max & xor)
			flips++;
		xor >>= 1;
	}
	return (flips);
}
