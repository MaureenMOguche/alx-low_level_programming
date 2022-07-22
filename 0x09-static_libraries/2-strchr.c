#include "main.h"

/**
 * _strchr - returns pointer to the first occurence of c in strings
 *
 * @c: character whose first occurence is to be found
 * @s: string to be searched for character c
 *
 * Return: s or null
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return ('\0');
}
