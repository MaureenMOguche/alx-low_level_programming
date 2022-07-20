#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the poer of y
 *
 * @x: Value to raise
 * @y: power to raise x to
 * Return: result of the calculation or -1 if y is less than 0.
 */

int _pow_recursion(int x, int y)
{
	int j;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	j = x * _pow_recursion(x, y - 1);
	return (j);
}
