#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_file - creates a file.
 * @filename: pointer to the file to be readed
 * @text_content: pointer to the content to be written on the new file
 * Return: 1 on success, -1 otherwise
 */

int create_file(const char *filename, char *text_content)

{
	int fd, lw;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
	{
		return (-1);
	}
	lw = write(*filename, text_content, strlen(text_content));
	if (lw == -1)
	{
		close(fd);
		return (-1);
	}
	return (1);
}
