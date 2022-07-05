#include "main.h"
/**
 *
 */
void print_alphabet_x10(void)
{
	int num; 
	char alpha;

	for (num = 1; num <= 10; num++)
	{
		for (alpha = 97; alpha < 123; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
