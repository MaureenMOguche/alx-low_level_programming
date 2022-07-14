#include "main.h"

/**
 * lenstr - calculates the length of a string
 *
 * @str: string whose length is to be calculated
 *
 * Return: returns length of string including null byte
 */
/*
int lenstr(char *str)
{
	int i;

	for (i = 0; str[i] <= '\0''; i++)
		;
	return (i);
}*/

/**
 * _strncpy - copies a string
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
/*	int src_len = lenstr(dest);*/
	
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (j = i; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
