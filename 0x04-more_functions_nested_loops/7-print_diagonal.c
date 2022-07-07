#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: the nmber of times a backslash should be printed
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(92);
		}
	}
	_putchar('\n');
}
