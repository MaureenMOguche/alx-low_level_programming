#include "main.h"
#include <stdlib.h>

/**
 * lenstr - calculates length of a string
 * @s: string length to be calculated
 * Return: length of string
 */

int lenstr(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strdup - returns pointer to a newly allocated space in memory
 * whic contains a copy of the given string
 *
 * @str: given string
 * Return: ptr
 */

char *_strdup(char *str)
{
	char *ptr_s;
	int i, len_str = lenstr(str);

	if (*str == '\0')
		return (NULL);

	ptr_s = malloc(len_str * sizeof(char));

	for (i = 0; i < len_str; i++)
	{
		if (ptr_s == NULL)
			return (NULL);
		ptr_s[i] = str[i];
	}
	return (ptr_s);
}
