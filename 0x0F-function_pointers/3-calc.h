#ifndef MAIN_H
#define MAIN_H

/**
 * struct op - typedef for returning function pointer
 * @func: the function
 */

typedef struct op
{
	char *op;
	int (*func)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
