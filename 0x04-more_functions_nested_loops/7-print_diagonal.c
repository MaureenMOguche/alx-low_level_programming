#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: the nmber of times a backslash should be printed
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (j = i; j < n; j++)
			{
				_putchar(92);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
