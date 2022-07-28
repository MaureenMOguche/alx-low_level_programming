#include "main.h"
#include <stdlib.h>

/**
 * lenstr - calculates the length of a string
 * @s: string whose length is to be calculated
 * Return: string length
 */

int lenstr(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to be copied from s2
 * Return: NULL if failed
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, s1_len, s2_len, length, ptr_len;

	s1_len = lenstr(s1);
	s2_len = lenstr(s2);
	length = s1_len + s2_len + 1;
	ptr = malloc(length * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		ptr[i] = s1[i];
	}

	if (n >= s2_len)
	{
		for (i = 0; i < s2_len; i++)
		{
			ptr[s1_len + i] = s2[i];
		}
	}

	for (i = 0; i < n; i++)
	{
		ptr[s1_len + i] = s2[i];
	}

	ptr_len = lenstr(ptr);

	ptr[ptr_len + 1] = '\0';

	return (ptr);
}
