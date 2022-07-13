#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: string variable to be reversed
 */

void rev_string(char *s)
{
	int a = 0;
	int c = 0;
	int d;
	char b;

	while (s[a] != '\0')
	{
		a++;
	}

	for (d = (a - 1); d >= (a / 2); d--)
	{
		b = *(s + d);
		*(s + d) = *(s + c);
		*(s + c) = b;
		c++;
	}
}
