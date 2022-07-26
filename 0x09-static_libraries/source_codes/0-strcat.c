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
 * _strcat - concatenates two strings overriding the null byte
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: resulting string at dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int dest_len = lenstr(dest);
	int src_len = lenstr(src);

	for (i = 0; i < src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}

	return (dest);
}
