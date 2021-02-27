#include <stdio.h>
#include <stdlib.h>

/**
 *main - Adds two number
 *@argc: captures the number of commands in the command line
 *@argv: captures the strings in the command line
 *Return: always 0
 */

int main(int argc, char *argv[])
{
	int res = 0;

	if (argc > 1)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);
	}
	else
		printf("Error\n");
	return (0);
}
