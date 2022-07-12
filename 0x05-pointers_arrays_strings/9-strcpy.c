#include "main.h"

char *_strcpy(char *dest, char *src)
{
	int i, n;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return dest;
}
