#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number whose last digit is to be printed
 *
 * Return: returns value of the last digit
 */
int print_last_digit(int n)
{
	int nac, lastdigit;

	lastdigit = n % 10;
	nac = lastdigit + 48;
	_putchar(nac);
	return (lastdigit);
}


