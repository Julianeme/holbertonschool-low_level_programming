#include <stdio.h>
#include <stdlib.h>

/**
 *main - Adds two number
 *@argc: captures the number of commands in the command line
 *@argv: captures the strings in the command line
 *Return: 0 if the operation was succesful, 0 it not
 */

int main(int argc, char *argv[])
{
	int res = 0;

	if (argc == 3)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
