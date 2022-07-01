#include <stdio.h>
/**
 * main - prints lower and uppercase alphabets
 *
 * Return: returns 0 if successful
 */
int main(void)
{
	int ch;
	int ca;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
		for (ca = 'A'; ca <= 'Z'; ca++)
		       putchar(ca);
	putchar('\n');
	return (0);
}	
