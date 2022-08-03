#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - gets the correct function to perform the operation
 *
 * @s: operator passed 
 * Return: pointer to the function that corresponds to operator given
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;
	
	get_op_func(op_t[argv[2]]);
}
