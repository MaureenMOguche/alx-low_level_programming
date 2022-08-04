#include "variadic_function.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * c - prints character
 */

char c(char a)
{
	if (a)
		printf("%c", a);
}
/**
 * print_all - prints anything
 *
 * @format: format of the string to be printed
 */

void print_all(const char * const format, ...)
{
	va_list
}
