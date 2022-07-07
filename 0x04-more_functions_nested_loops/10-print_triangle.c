#include "main.h"

/**
 * print_triangle - prints triangles
 * 
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		if (size <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (j = 0; j > i; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
