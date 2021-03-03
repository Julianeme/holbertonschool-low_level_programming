#include "holberton.h"
#include <stdlib.h>

/**
 *argstostr - concatenates the arguments
 *@ac: number of arguments.
 *@av: the argument
 *Return: a pointer to the concatenated string
 */

char *argstostr(int ac, char **av)
{
	int length = 0;
	char *array;
	int i, j;

	if (argc < 1)
	{
		return (NULL);
	}
	else
	{
		for (i = 1; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
			{
				length = length + 1;
								}
			}
		}
	array = malloc(length * sizeof(char));
	if (array == 0)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			array[i + j = av[i + j];
		}
	}
return (array);
}
