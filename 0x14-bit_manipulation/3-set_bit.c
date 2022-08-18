#include "main.h"
#include <stdlib.h>

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i, num, div = 2;
	char *numb;

	for (i = 0; *n > 0; i++)
	{
		numb[i] = (*n % div) + '0';
		*n = *n / div;
	}

	for (i = 0; numb[i] != '\0'; i++)
	{
		if (i == index)
		{
			numb[i] = '1';
		}
	}
	num = atoi(numb);
	return (num);
}
