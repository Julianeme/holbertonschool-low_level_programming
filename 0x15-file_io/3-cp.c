#include "holberton.h"
/**
 * main - copies a file
 * @argc: number of arguments passed to the program
 * @argv: arguments
 * Return: 0 if successfull
 */
int main(int argc, char **argv)
{
	int fd1 = 0, fd2 = 0, rd = 0, wr = 0;
	char wbuffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(99);
	}
	rd = read(fd1, wbuffer, BUFSIZ);
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	wr = write(fd2, wbuffer, rd);
	if (wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (close(fd1) == -1)
		error100(argv[1]);
	if (close(fd2) == -1)
		error100(argv[2]);
	return (0);
}
/**
 * error100 - prints the error message when an fd cant be closed
 * @file: name of the file which failed to close
 * Return: 0 if successfull
 */
void error100(char *file);

void error100(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file);
	exit(100);
}
