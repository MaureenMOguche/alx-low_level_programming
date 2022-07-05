#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	long int a = 1, b = 2;
	long int next = a+b;

	printf("%lu, %lu, ", a, b);
	i = 3;
	while (i < 101) 
	{
		printf("%lu", next);
		if (i == 50)
			break;
		else
			continue;
		printf(", ");
		a = b;
		b = next;
		next = a + b;
		i++;
	}
	return (0);
}

