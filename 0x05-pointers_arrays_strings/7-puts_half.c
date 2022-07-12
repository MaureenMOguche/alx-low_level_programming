#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string whose half is to be printed
 */

void puts_half(char *str)
{
	int len, n;

	for (len = 0; str[len] != 0; len++)
		;
	if (len % 2 == 0)
	{
		for (n = (len / 2); n < len; n++)
			_putchar(str[n]);
	}
	else
	{
		for (n = (len / 2) + 1; n < len; n++)
			_putchar(str[n]);
	}
	_putchar('\n');
}
