#include "holberton.h"
#include <stdlib.h>

/**
 *_strdup - duplicates an array
 *@str: array to be copied
 *Return: 0 - NULL if unsuccesuf, otherwise pointer to copied array
 */

char *_strdup(char *str)
{

	unsigned int i;
	unsigned int a = 0;
	char *array;

	while (str[a] != '\0')
	{
		a++;
	}
	if (!str)
		return (NULL);
	array = (char *)malloc((a - 1) * sizeof(char));
	if (array == 0)
		return (NULL);
	for (i = 0; i <= a; i++)
	{
		array[i] = str[i];
	}
	return (array);
}
