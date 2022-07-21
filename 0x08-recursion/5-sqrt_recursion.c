#include "main.h"

/**
 * square - finds the square
 * @n: parameter one
 * @m: parameter two
 * Return: square root or -1 if no natural root
 */

int square(int n, int m)
{
	if (n > m)
		return (-1);
	else if (n * n == m)
		return (n);
	return (square(n + 1, m));
}

/**
 * _sqrt_recursion - returns square rooot of a number
 *
 * @n: number whose square root is to be calculated
 * Return: square root or -1 if no natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (square(1, n));
}
