#include <stdio.io>
/**
 * main - prints all numbers in base 16
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int a = 0;
	int b = 'a';

	while (a < 10 && b < 'g')
	{
		putchar(a);
		a++;
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
