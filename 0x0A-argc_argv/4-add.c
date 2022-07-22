#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - adds posiitive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful, 1 if error
 */

int main(int argc, char **argv)
{
	int i, j;
	int sum = 0;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);

}
