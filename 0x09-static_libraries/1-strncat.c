#include "main.h"

/**
 * lenstr - calculates the lenght of a string
 *
 * @str: string whose length is to be calculated
 *
 * Return: length of string
 */

int lenstr(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strncat - concatenates two stringe
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes that will be concatenated
 *
 * Return: resulting string at dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len = lenstr(dest);

	for (i = 0; (i < n && src[i] != '\0'); i++)
	{
		dest[dest_len + i] = src[i];
	}

	return (dest);
}
