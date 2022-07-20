#include "main.h"

/**
 * _sqrt_recursion - returns square rooot of a number
 *
 * @n: number whose square root is to be calculated
 * Return: square root or -1 if no natural square root
 */

int _sqrt_recursion(int n)
{
	int i = -1, j = 0;

	if (n > 0)
		j = 1 + _sqrt_recursion(n - (i + 2));
	if (n < 0)
		j = -1;
	return (j);
}
