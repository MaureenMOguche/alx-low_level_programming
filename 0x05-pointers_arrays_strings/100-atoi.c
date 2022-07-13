#include "main.h"


/**
 * _atoi - converts string to integer
 * @s: string to convert
 *
 * Return: converted integer
 */

int _atoi(char *s)
{
	int num = 0, sign = 1, i = 0, j;

	while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	j = i;

	while (s[j] >= '0' && s[j] <= '9')
	{
		num = num * 10 + sign * (s[j] - '0');
		j++;
	}

	return (num);
}
