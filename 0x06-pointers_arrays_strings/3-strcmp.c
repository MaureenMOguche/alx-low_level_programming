/**
 * _strcmp - compares two strings
 *
 * @s1: first string to be compared
 * @s2: second string
 *
 * Return: 0 if equal, -15 if s1 < s2, 15 if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			j = 0;
		}
		else if (s1[i] < s2[i])
		{
			j = -15;
		}
		else
		{
			j = 15;
		}
	}
	return (j);
}
