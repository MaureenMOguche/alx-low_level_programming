#include "main.h"

/**
 * leet - encodes string into leetspeek.
 * @s: string to be encoded
 * Return: resulting string.
 */

char *leet(char *s)
{
	int i;
	int j;
	char old_le[] = "aAeEoOtTlL";
	char new_le[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; old_le[j] != '\0'; j++)
		{
			if (s[i] == old_le[j])
				s[i] = new_le[j / 2];
		}
	}
	return (s);
}

