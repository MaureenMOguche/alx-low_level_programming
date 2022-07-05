#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	int i = 0;
	unsigned long long a = 1, b = 2, next;

	printf("%llu, %llu, ", a, b);
	i = 2;
	while (i < 98)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%llu", next);
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

