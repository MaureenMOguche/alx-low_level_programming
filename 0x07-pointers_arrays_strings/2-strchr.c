#include "main.h"

/**
 * strchr - returns pointer to the first occurence of c in strings
 *
 * @c: character whose first occurence is to be found
 * @s: string to be searched for character c
 */

char *_strchr(char *s, char c)
{
	int i;
	char *n;

	for (i = 0; *s++ == 0; i++)
	{
		if (*s++ == c)
			n = s + c;
		else
			n = s + '\0';
	}
	return (n);
}
