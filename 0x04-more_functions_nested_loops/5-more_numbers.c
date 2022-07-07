#include "main.h"

/**
 * more_numbers - prints 0 to 14 10 times
 */

void more_numbers(void)
{
	int b, /*c, n*/ i, m;

	for (i = 0; i < 10; i++)
	{
		/*for (c = 48; c < 58; c++)
			_putchar(c);*/
		for (b = 0; b < 15; b++)
		{
/*			n = (b / 10) + '0';*/
			m = (b % 10) + '0';
/*			o = n + m + '0';
			_putchar(o);*/
			_putchar(m);
			if (b > 9)
				_putchar(m);
		}
	_putchar('\n');
	}
}
