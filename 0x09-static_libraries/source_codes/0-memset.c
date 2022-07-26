#include "main.h"

/**
 * _memset - this fills the first n bytes of the memory with a constant byte.
 *
 * @s: the pointer whose bytes are to be replaced.
 * @b: the byte used to replace n bytes of of s.
 * @n: number of bytes to be replaced.
 *
 * Return: The area pointed to by s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
