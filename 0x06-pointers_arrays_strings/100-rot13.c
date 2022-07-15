#include "main.h"

/** rot13 - encodes a string
 * @s: string to be encoded
 *
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i;
	int j;
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char true_b;

	for (i = 0; s[i] != '\0'; i++)
	{
		true_b = 0;
		for (j = 0; alpha[j] != '\0' && true_b == 0; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = r[j];
				true_b = 1;
			}
		}
	}
	return (s);
}
