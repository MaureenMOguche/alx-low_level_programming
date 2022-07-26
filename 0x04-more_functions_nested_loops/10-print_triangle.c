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
			for (j = i; j >= 0; j--)
			{
				_putchar(32);
			}
			for (j = i; j < size; j++)
			{	
				_putchar(35);
			}
		}
		_putchar('\n');

	}
}
