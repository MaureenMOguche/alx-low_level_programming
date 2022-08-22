#include "main.h"
#include <unistd.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - reads and prints a text file to POSIX STDOUT
 * @filename: Name of file to read and print
 * @letters: number of letters to read and print
 * Return: number of letters read and printed
 */

size_t read_textfile(const char *filename, size_t letters)
{
	int fdo, fdr, fdw;
	char *temp;

	if (filename == NULL)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);

	fdo = open(filename, O_RDONLY);
	if (fdo < 0)
	{
		free(temp);
		return (0);
	}

	fdr = read(fdo, temp, letters);
	if (fdr < 0)
	{
		free(temp);
		return (0);
	}

	fdw = write(STDOUT_FILENO, temp, fdr);
	free(temp);
	close(fdo);

	if (fdw < 0)
		return (0);
	return ((ssize_t)fdw);
}
