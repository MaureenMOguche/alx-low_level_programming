#include <stdio.h>
/**
 * main - print allpossible single digit numbers
 *
 * Return: 0 when successful
 */
int main(void)
{
	int a = 48;

	while (a < 58)
	{
		putchar(a);
		if (a == 58)
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
			a++;
		}
	}
	putchar('\n');
	return (0);
}
