#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - copies a file
 * @argc: number of arguments passed to the program
 * @argv: arguments
 * Return: 0 if successfull
 */

int main(int argc, char *argv[])
{
	int fd1, fd2, rd, wr;
	char wbuffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	rd = read(fd1, wbuffer, 1024);
	if ((rd == -1) | (fd1 == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(99);
	}

	wr = write(fd2, wbuffer, rd);
	if (wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
close(fd2);
if ((close(fd1) == -1))
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %s", argv[1]);
	exit(100);
}
return (0);
}
