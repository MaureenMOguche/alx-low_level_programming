#include <stdio.h>
/**
 * main - computes and prints the sum of multiples of 3 belo2 1024
 * Return: 0 when successful
 */
int main(void)
{
	int a = 0;
	int b;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		b += a;
		a++;
	}
	printf("%d\n", b)
	return (0);
}
