#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * Return: returns value of the last digit
 */
int print_last_digit(int n)
{
	int nac;

	n = n % 10;
	nac = n + 48;
	_putchar(nac);
	return (n);
}


