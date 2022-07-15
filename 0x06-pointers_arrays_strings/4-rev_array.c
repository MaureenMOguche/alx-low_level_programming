#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: an array of integers
 * @n: the number of elements to swap
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
