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
	int k = 0;

	if (ac < 1 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			length = length + 1;
		}
		length = length + 1;
	}
	length = length + 1;
	array = malloc(length * sizeof(char));
	if (array == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			array[k] = av[i][j];
			k++;
		}
		array[k] = '\n';
		k++;
		if (i == ac)
			array[k] = '\0';
	}
return (array);
}
