#include "holberton.h"
#include <stdlib.h>

/**
 *_strdup - duplicates an array
 *@str: array to be copied
 *Return: 0 - NULL if unsuccesuf, otherwise pointer to copied array
 */

char *_strdup(char *str)
{

	int i, a = 0;
	char *array;

	if (!str)
		return (NULL);
	while (str)
		a++;
	array = (char *)malloc(a * sizeof(char) + 1);
	if (array == 0)
		return (NULL);
	for (i = 0; i <= a; i++)
	{
		array[i] = str[i];
	}
	array[i] = 00;
	return (array);
}
