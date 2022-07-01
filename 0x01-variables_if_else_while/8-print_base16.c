#include <stdio.h>
/**
 * main - prints 0 to 9 on a new line each
 *
 * Return: returns 0 if successful
 */
int main(void)
{
        int a;
	int b;

        for (a = 48; a < 58; a++)
        {
                putchar(a);
        }
	for (b = 'a'; a <= 'f'; a++)
		putchar (b);
	putchar('\n');
	return (0);
}
