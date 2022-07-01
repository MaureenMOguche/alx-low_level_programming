#include <stdio.h>
/**
 * main - prints 0 to 9 on a new line each
 *
 * Return: returns 0 if successful
 */
int main(void)
{
	int a = 48;
	int c = a + '0';
	for (a = 48; a < 58; a++)
	{
		putchar(c);
		putchar('\n');
	}
	return (0);
}
