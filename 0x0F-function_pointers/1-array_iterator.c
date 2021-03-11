#include "function_pointers.h"

/**
 *array_iterator - prints a name
 *@array: array to be printed
 *@size: size of the array
 *@action: function to be aplied
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
