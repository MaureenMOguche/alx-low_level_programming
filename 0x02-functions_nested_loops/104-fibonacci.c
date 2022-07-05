#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	int i = 0;
	long int a = 1, b = 2, next;

	printf("%lu, %lu, ", a, b);
	i = 2;
	while (i < 98)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);
		if (i > 96)
		{
			printf("\n");
			break;
		}
		printf(", ");
		i++;
	}
	return (0);
}

