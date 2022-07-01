#include <stdio.h>
/**
 * main - prints all numbers in base 16
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int a = 10;
	char b = a + '0';

	while (a < 58)
	{
		putchar(a);
		a++;
	}
	while (b < 'g')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
