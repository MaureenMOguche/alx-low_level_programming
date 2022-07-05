#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	int a = 0;
	int b = 1;
	int c = a + b;
	int i = 0;

	printf("%d, ", b);
	while (i < 49)
	{
		printf("%d, ", c);
		a = b;
		b = c;
		c = a+b;
		i++;
	}
	return (0);
}

