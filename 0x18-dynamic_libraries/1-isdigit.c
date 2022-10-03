#include "main.h"

/**
 * _isdigit - checkd for digit
 *
 * @c: integer to be checked
 *
 * Return: 1 if digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
