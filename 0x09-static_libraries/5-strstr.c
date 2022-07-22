#include "main.h"

/**
 * _strstr - finds the first occurrence of needle
 * in the haystack string
 *
 * @haystack: the string where the substring needle
 * would be searched for
 * @needle: the substring to be found
 *
 * Return: pointer to substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	b = needle;

	if (*b == 0)
	{
		return ((char *) haystack);
	}

	for (; *haystack != 0; haystack += 1)
	{
		if (*haystack != *b)
		{
			continue;
		}

		a = haystack;

		while (1)
		{
			if (*b == 0)
			{
				return ((char *)haystack);
			}
			if (*a++ != *b++)
			{
				break;
			}
		}

		b = needle;
	}

	return ('\0');
}
