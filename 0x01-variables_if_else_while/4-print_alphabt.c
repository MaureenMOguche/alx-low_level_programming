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

	for (a = 'a'; a <= 'z'; a++)
		if (a != 'e' || a != 'b')
		{
			remove(a);
		}
		else
		{
			c = a;
			putchar(c);
		}
	putchar('\n');
	return (0);
}
