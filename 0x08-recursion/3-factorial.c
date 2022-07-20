#include "main.h"

/**
 * factorial - calculates factorial of a given number
 *
 * @n: number whose factorial is to be created
 * Return: factorial
 */

int factorial(int n)
{
	int j;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	j = n * factorial(n - 1);
	return (j);
}
