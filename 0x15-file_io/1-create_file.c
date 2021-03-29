#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - creates a file
 * @filename: pointer to the file to be readed
 * @text_content: pointer to the content to be written on the new file
 * Return: 1 on success, -1 otherwise
 */

int create_file(const char *filename, char *text_content)

{
	int fd, lw, i = 0;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
	{
		return (-1);
		close(fd);
	}
	while (text_content[i])
	{
		i++;
	}
	lw = write(fd, text_content, i);
	if (lw == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
