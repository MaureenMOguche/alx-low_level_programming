#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i, j;
	int k = 0;
	char temp;

	for (i = 0; s[i] != '\n'; i++)
		;
	for (j = (i - 1); j >= (i / 2); j--)
	{
		temp = *(s + j);
		*(s + j) = *(s + k);
		*(s + k) = temp;
		k++;
	}
}
