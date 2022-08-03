#include "3-calc.h"

/**
 * main - entry point
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: always 0 (success)
 */

int main(int argc, char **argv)
{
	int num1, num2, operator, i;
	char operators[] = {'+', '-', '*', '=', '/', '%'};

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	
	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	for (i = 0; i < 5; i++)
	{
		if (operator] != operators[i])
		{
			printf("Error\n");
			exit (99);
		}
	}
	if (num2 == 0)
	{
		printf("Error\n");
		exit (100);
	}
	

}
