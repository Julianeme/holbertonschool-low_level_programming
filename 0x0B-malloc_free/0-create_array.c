#include "holberton.h"
#include <stdlib.h>

/**
 *create_array - creates an array of chars, and inits it with a specific char
 *@size: array size
 *@c: char to fill it with
 *Return: 0 if the operation was succesful, 0 it not
 */



char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		array = (char *)malloc(size * sizeof(c));
	}
	for (i = 0; i < size; i++)
	{
		*(array + i) = c;
	}
	return (array);
}
