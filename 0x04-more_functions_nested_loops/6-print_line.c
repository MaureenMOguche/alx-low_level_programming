#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 */

void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(95);
		}
	i++;
	}
	_putchar('\n');
}
