#include "holberton.h"
#include <stdlib.h>

/**
 *malloc_checked - allocates memory
 *@b: size to be allocated
 *Return: 98 if fails - otherwise pointer to memory allocatedy
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *array;

	array = malloc(b);
	if (array == NULL)
		exit (98);
	return (array);
}
