#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - Adds two positive numbers
 *@argc: captures the number of commands in the command line
 *@argv: captures the strings in the command line
 *Return: 0 if the operation was succesful, 0 it not
 */

int main(int argc, char *argv[])
{
	int res = 0;
	int i, j;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (isdigit(argv[i][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
