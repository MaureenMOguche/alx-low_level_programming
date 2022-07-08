#include "main.h"

/**
 * print_triangle - prints triangles
 * * @size: size of triangle
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
			for (j = 0;  
				_putchar(35);
		}
		_putchar('\n');

	}
}
