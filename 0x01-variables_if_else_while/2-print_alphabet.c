#include <stdio.h>
/**
 * main - prints a-z and ends with a new line
 *
 * Return: returns 0 if successful
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
		putchar('\n');
	return (0);
}

