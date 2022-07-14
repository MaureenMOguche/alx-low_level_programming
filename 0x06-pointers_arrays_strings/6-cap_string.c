#include "main.h"

/**
 * cap_string - converts strings to upper case
 */

char *cap_string(char *str)
{
	int i, j;
	char sep[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}'}; 

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == sep[j])
				str[i+1] = str[i+1] + 32;
		}	
	}
	return (str);
}

