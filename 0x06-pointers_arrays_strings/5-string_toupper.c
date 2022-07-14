#include "main.h"

/**
 * string_toupper - converts strings to upper case
 *
 * @str: string to be converted to upper case
 * Return: the converted string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	return (str);
}

