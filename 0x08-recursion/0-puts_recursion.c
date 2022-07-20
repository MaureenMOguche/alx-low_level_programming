#include "main.h"

/**
 * _puts_recursion - prints a string and a new line
 *
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
       		return;	/* Always use return to avoid errror */
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
