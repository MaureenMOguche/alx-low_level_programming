#include "main.h"

/**
 * _strspn - returns the number of bytes in initial segment of s
 *
 * @s: pointer to sting whose byte length wil be calculed
 * @accept: accepted bytes
 *
 * Return: returns accept
 */

unsigned int _strspn(char *s, char *accept)
{
	char *p;
	char *a;
	int j = 0;

	for (p = s; *p != '\0'; ++p)
	{
		for (a = accept; *a != '\0'; ++a)
			if (*p == *a)
			break;
		if (*a == '\0')
			return (j);
		++j;
	}
	return (j);
}
