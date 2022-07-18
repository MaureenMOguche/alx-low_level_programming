#include "main.h"

/**
 * _strspn - returns the number of bytes in initial segment of s
 *
 * @s: pointer to sting whose byte length wil be calculed
 * @accept: accepted bytes
 *
 * Return - returns accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int j;
	unsigned int k = 0;

	int i = 0;
	while (*s+i != '\0')
	{
		for (j = 0; *accept+j != '\0'; j++)
			if (*s == *accept)
				break;
		k++;
		i++;
	}
	return (k);
}
