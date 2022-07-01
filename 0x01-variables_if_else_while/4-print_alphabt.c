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
	int b;
	char d[2];

	for (a = 'a'; a <= 'z'; a++)
		if (a == 'e' || a == 'q')
		{
			d[2] = a;
			remove(d);
		}
		else
		{
			b = a;
			putchar(b);
		}
	putchar('\n');
	return (0);
}
