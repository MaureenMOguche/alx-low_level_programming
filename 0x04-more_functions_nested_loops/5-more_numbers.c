#include "main.h"

/**
 * more_numbers - prints 0 to 14 10 times
 */

void more_numbers(void)
{
	int b, i;

	for (i = 0; i < 10; i++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)
			_putchar(49);
			_putchar((b % 10) + '0');
		}
	_putchar('\n');
	}
}
