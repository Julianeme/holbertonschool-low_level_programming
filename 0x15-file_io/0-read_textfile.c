#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: pointer to the file to be readed
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print or 0 if fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, lr, lw;
	char *rbuffer;

	if (filename == NULL)
		return (0);
	rbuffer = malloc(sizeof(size_t) * letters);
	if (rbuffer == NULL)
	{
		close(fd);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	lr = read(fd, rbuffer, letters);
	if (lr == -1)
	{
		close(fd);
		free(rbuffer);
		return (0);
	}
	lw = write(STDOUT_FILENO, rbuffer, letters);
	if (lw == -1)
	{
		close(fd);
		free(rbuffer);
		return (0);
	}
	if (lw != lr)
	{
		close(fd);
		free(rbuffer);
		return (0);
	}
	close(fd);
	free(rbuffer);
	return (lw);
}
