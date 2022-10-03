#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to dest
 *
 * @src: source of copied bytes
 * @dest: destination of copied bytes
 * @n: no of bytes to be copied
 *
 * Return: retusns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
