#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode of its own main function
 * @argc: no of command line arguments
 * @argv: array of command line arguments
 * Return: 0 (success), 1 or 2 on fail
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *func_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	func_ptr = (unsigned char *)main;
	i = 0;
	if (bytes > 0)
	{
		while (i < (bytes - 1))
			printf("%02hhx ", func_ptr[i++]);
		printf("%hhx\n", func_ptr[i]);
	}
	return (0);
}
