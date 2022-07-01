#include <stdio.h>
/**
 * main - prints a-z on a new line each
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
