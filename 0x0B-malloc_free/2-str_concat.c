#include "main.h"
#include <stdlib.h>

/**
 * lenstr - calculates length of a string
 * @s: string ti be calculated
 * Return: length
 */

int lenstr(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * str_concat - concatenates two strings
 *
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: NULL or new malloc
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int s1_len = lenstr(s1);
	int s2_len = lenstr(s2);
	char *ptr;

	ptr = malloc((s1_len + s2_len + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		ptr[i] = s1[i];
	}

	for (i = 0; i < s2_len; i++)
		ptr[s1_len + i] = s2[i];

	ptr[s1_len + s2_len + 1] = '\0';
	return (ptr);
}
