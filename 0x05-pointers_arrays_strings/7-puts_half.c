#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string whose half is to be printed
 */

void puts_half(char *str)
{
	int len, n;
	for (len = 0; str[len] != 0; i++)
		;
	for (n = 0; n <= len; n++)
	{
		if (len % 2 == 0)
			n = len/2;
		else
			n = (len - 1)/2;
		_putchar(str[n]);
	}
	_putchar('\n');
}
