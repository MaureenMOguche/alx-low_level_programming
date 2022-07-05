#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	int a = 1, b = 2;
	int next = a+b;

	printf("%d, %d, ", a, b);
	i = 3;
	while (i < 51) 
	{
		printf("%lu, ", next);
		a = b;
		b = next;
		next = a + b;
		i++;
	}
	return (0);
}

