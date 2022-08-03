#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 *
 * @a - first number
 * @b - second number
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 *
 * @a: firsnt number
 * @b: second number
 *
 * Return: result of division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the division of two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: remainder of division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
