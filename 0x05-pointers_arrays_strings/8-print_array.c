#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the number of elements in an array
 *
 * @a: the array whose number of elements is to be printed
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		else
			break;
	}
	printf("\n");
}
