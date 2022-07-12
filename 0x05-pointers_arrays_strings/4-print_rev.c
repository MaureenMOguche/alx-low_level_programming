#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string to be printed in reverse
 */

void print_rev(char *s)
{
	int i, len;
	
	len = _strlen(s);
	for (i = 0; (i < len && s[i] != '\0'); i++)
		_putchar(s[i]);
	_putchar('\n');
}
