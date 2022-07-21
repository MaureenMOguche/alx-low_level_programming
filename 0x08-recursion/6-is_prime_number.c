#include "main.h"

/**
 * is_prime_number - checks for prime numbers
 * @n: the number to be checked
 * Return: 1 if prime, 0 if not prime
 */

int is_prime_number(int n)
{
	int i = 1, j;

	if (i == n)
		return (0);
	else
		if (n  == 0)
			return (1);
		else
		is_prime_number(n % (i + 1));
	return (j)
/*
	if (i < n)
	{
		is_prime_number(n % (i + 1));
		j = 1;
	}
	return (j);*/
}
