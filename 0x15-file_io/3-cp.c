#include "holberton.h"
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
	fd2 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	rd = read(fd1, wbuffer, 1024);
	wr = write(fd2, wbuffer, rd);
	if ((fd1 == -1) | (wr == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(99);
	}
	if (close(fd1) == -1)
		error100(fd1);
	if (close(fd2) == -1)
		error100(fd2);
	return (0);
}
/**
 * error100 - prints the error message when an fd cant be closed
 * @fd: file descriptor
 * Return: 0 if successfull
 */
int error100(int fd);

int error100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %i", fd);
	exit(100);
}
