#include "main.h"
#include <stdio.h>

/**
 * main - fizz buzz test
 */

int main (void)
{
	int i;
	char b[] = "buzz";
	
	for (i = 1; i < 101; i++)
		printf("%d ", i); 
		if (i % 3 == 0)
		{
			i = b;
			printf("%s ", i);
		}

		printf("\n");
}
