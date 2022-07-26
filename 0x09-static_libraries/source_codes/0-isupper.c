#include "main.h"
/**
 * _isupper - checks for uppercase character
 *
 * @c: value to be checked.
 *
 * Return: 1 if c is uppercase.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
