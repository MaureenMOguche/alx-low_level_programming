#include "main.h"
/**
 * print_alphabet - prints out alphabets
 *
 * Return: always 0
 */
int main(void)
{
	print_alphabet();
}

void print_alphabet(void)
{
	char alpha = 97;

	while (alpha < 123)
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
