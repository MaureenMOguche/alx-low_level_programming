#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * Return: returns value of the last digit
 */
int print_last_digit(int n)
{
	n = n%10;
	
	_putchar(n);
	return (n);
}


