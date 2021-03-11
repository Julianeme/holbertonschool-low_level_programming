#include "function_pointers.h"

/**
 *int_index - looks for a int in an array
 *@array: array to be searched on
 *@size: size of the array
 *@cmp: function to be aplied
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0, i = 0;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		while (i < size)
		{
			n = cmp(array[i]);
			if (n)
				return (i);
			i++;
		}
	}
	return (-1);
}
