#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int c = a + b;
	int i = 0;

	printf("%d, %d, ", a, b);
	while (i < 49)
	{
		printf("%d, ", c);
		a = b;
		b = c;
		c = a + b;
		i++;
	}
	return (0);
}

