#include "main.h"
/**
 * _islower - checks for lower case characters
 *
 * Return: returns 1 if c is lower.
 *
 * @c: value to be tested.
 */
int _islower(int c)
{
	if (c > 97 && c < 123)
		return (1);
	else
		return (0);
}
