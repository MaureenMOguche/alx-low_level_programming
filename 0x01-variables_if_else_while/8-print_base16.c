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
	int c;

	while (a < 58)
	{
		putchar(b);
		a++;
	}
	while (c < 'g')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
