#include "main.h"
/**
 * print_alphabet - prints out alphabets
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char alpha = 97;

	while (alpha < 123)
		_putchar(alpha);
	_putchar('\n');
}
