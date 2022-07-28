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
	unsigned int i, j, s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	s1_len = lenstr(s1);

	if (s2 == NULL)
		s2 = "";
	s2_len = lenstr(s2);

	if (n >= s2_len)
	{
		n = s2_len;
	}

	ptr = malloc((s1_len + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
		ptr[s1_len + j] = s2[j];

	ptr[s1_len + j] = '\0';

	return (ptr);
}
