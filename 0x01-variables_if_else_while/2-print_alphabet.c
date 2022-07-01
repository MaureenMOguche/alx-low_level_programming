#include <stdio.h>
/**
 * main - prints a to z in lowercase
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
