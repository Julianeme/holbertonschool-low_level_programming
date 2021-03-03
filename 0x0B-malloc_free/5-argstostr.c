#include "holberton.h"
#include <stdlib.h>

/**
 *free_grid - returns a pointer to a 2 dimensional array of integers
 *@grid: grid to be freed.
 *@height: height of the matrix
 */

char *argstostr(int ac, char **av)
{
	int length = 0;
	int i, j;

	if (argc < 1)
	{
		return (NULL);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				length = length + 1;
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
