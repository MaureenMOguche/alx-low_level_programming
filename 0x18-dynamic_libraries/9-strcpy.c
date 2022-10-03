#include "main.h"

/**
 * _strcpy - copies string pointed to by src
 * to the buffer pointede to by dest
 *
 * @dest: the pointer destination of copied string
 * @src: the pointer to source of string to be copied
 *
 * Return: returns dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
