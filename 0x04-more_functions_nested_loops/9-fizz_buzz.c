#include "main.h"
#include <stdio.h>

/**
 * main - fizz buzz test
 *
 * Return: always 0;
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
			printf("%s", "Fizz");
		else if (i % 5 == 0)
			printf("%s", "Buzz");
		else if ((i % 3 == 0) || (i % 5 == 0))
			printf("%s", "FizzBuzz");
		else
			printf("%d", i);
		if (i < 100)
			printf("%s", " ");
	}
	printf("\n");
	return (0);
}
