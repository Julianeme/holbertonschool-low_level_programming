#include "holberton.h"
#include <stdlib.h>

/**
 *_calloc - creates a string of nmemb long and size int
 *@nmemb: number of elements
 *@size: size
 *Return: a pointer to the tring
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == 0)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		array[i] = 0;
return (array);
}
