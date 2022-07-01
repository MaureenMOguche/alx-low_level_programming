#include <stdio.h>
#include <string.h>
/**
 * main - prints a to z in lower case without q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a <= 'd' || a >= 'f' && a < 'q' || a >= 'r')
		putchar(a);
	}
	putchar('\n');
	return (0);
}
