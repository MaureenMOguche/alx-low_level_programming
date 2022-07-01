#include <stdio.h>
/**
 * main - print allpossible single digit numbers
 *
 * Return: 0 when successful
 */
int main(void)
{
	int a = '0';

	while (a < '10')
	{
		putchar(a);
		putchar(',');
	}
	putchar('\n');
	return (0);
}
