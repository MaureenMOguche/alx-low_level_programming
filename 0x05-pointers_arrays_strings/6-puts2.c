#include "main.h"

/**
 * puts2 - prints every character of a string on a new line
 *
 * @str: string whose characters will be printed
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 1)
			continue;
		_putchar(str[i]);
	}
	_putchar('\n');
}
