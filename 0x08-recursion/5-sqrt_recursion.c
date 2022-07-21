#include "main.h"

/**
 * square - finds the square
 * @n: parameter one
 * @m: parameter two
 * Return: square
 */
/*
int square(int n, int m)
{
	m = -1;
	n = n % m+2;
	if (n <= 0)
		return (0);
	else
		square(n - 1);
	return (1);
}*/

/**
 * _sqrt_recursion - returns square rooot of a number
 *
 * @n: number whose square root is to be calculated
 * Return: square root or -1 if no natural square root
 */

int _sqrt_recursion(int n)
{
	int m = -1;
	int o = 2;
	int count = 0;

	n = n % o;
	if (n <= 0)
		return (0);
	else
	{
		count++;
		o++;
		_sqrt_recursion(n - (m + 2));
		return(count);
	}
}
