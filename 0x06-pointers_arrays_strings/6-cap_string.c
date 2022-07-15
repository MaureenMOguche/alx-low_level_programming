#include "main.h"

/**
 * cap_string - converts strings to upper cae
 * @str: string to capitalize
 */

char *cap_string(char *str)
{
	int i = 1;
	int j;
	char *sep = " \t\n,;.!?\"(){}";

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= ('a' - 'A');
	while (str[i] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
			if (str[i - 1] == sep[j] && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= ('a' - 'A');
		i++;
	}
	return (str);
}

