#include "main.h"

/**
 * cap_string - converts strings to upper case
 */

char *cap_string(char *str)
{
	int i;
	char sep[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}'}; 

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == *sep)
			str[i+1] = str[i+1] + 32;	
	}
	return (str);
}

