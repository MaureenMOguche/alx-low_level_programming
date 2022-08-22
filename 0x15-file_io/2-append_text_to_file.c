#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file to append text to
 * @text_content: NULL terminated string to add at end of file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdo, fdw, len = 0;

	if (filename == NULL)
		return (-1);

	fdo = open(filename, O_RDWR | O_APPEND);
	if (fdo < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fdo);
		return (1);
	}

	while (*(text_content + len))
		len++;

	fdw = write(fdo, text_content, len);
	close(fdo);
	if (fdw < 0)
		return (-1);

	return (1);
}
