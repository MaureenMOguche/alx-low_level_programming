#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i, j;
	
	for (i = 0; s[i] != '\n'; i++)
		;
	for (j = i; j >= 0; j--)
		printf("%s", s[j]);
	printf("\n");
}
