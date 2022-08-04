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

	int i = 0;
	while (i < 5)
	{
		if (*(ops[i]).op == *s)
			return (ops[i].func);
		i++;
	}
	return (NULL);
}
