#include <stdio.h>

/**
 * main - entry point for program to get header of ELF file
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: 1 on success, error code on failure
 */
int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
