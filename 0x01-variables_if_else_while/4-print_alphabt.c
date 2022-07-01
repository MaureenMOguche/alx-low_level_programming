#include <stdio.h>
/**
 * main - prints a to z in lower case without q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int c;
	char b;

	for (a = 'a'; a <= 'z'; a++)
		if (a == 'e' || a == 'q')
		{
			b = a;
			removeChar(b);
		}
		else
		{
			c = a;
			putchar(c);
		}
	putchar('\n');
	return (0);
}
