#include "main.h"
/**
 * print_sign - prints the sign of a number
 *
 * @n: the value to be tested
 *
 * Return: returns zero if n is 0, returns -1 if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
