#include "holberton.h"
#include <stdlib.h>

/**
 *array_range - creates a array from min to max
 *@min: starting point
 *@max: max 
 *Return: a pointer to the tring
 */

int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(size * sizeof(int));
	if (array == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = min;
		min++;
	}
return (array);
}
