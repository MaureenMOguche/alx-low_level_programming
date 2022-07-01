#include <stdio.h>
/**
 * main - prints lower and uppercase alphabets
 *
 * Return: returns 0 if successful
 */
int main(void)
{
	int ch;

 	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
