#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: value to start printing from
 */
void print_to_98(int n);
{
	if (n < 98)
	{
		while (n <= 98)
		{
			_putchar((n/10) + '0');
			_putchar((n%10) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar('\n');
			n++;
		}
	}
	else if (n >= 98)
	{
		while (n >= 98)
		{
			_putchar((n/10) + '0');
			_putchar((n%10) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar('\n');
			n--;
		}
	}
}

