#include "main.h"

/**
 * _strpbrk - function locates the first occurence in the string
 * s of any of the bytes of string accept
 *
 * @s: string to be searched
 * @accept: strings that will be searched for
 *
 * Return: s;
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
			if (*a++ == *s)
				return ((char *)s);
		++s;
	}
	return ('\0');
}
