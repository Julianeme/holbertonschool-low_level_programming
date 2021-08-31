#include "search_algos.h"

/**
 * print_array - prints an array from pos bottom to top
 * @array: is a pointer to the first element of the array to search in
 * @bottom: starting printing position
 * @top: ending printing position
 */

void print_array(int *array, size_t bottom, size_t top)
{
	size_t i = bottom;

	printf("Searching in array: ");
	while (i <= top)
	{
		printf("%d", array[i]);
		if (i != top)
			printf(", ");
		i++;
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: first index where value is found or -1 if
 * not found or if array is Null
 */

int binary_search(int *array, size_t size, int value)
{
	size_t bottom, top, middle;

	bottom = 0;
	top = size - 1;

	if (array == NULL)
		return (-1);
	if (size == 1)
		return (array[bottom]);
	while (top > bottom)
	{
		print_array(array, bottom, top);
		middle = (bottom + top) / 2;
		/**
		 * If value greater, ignore left half
		*/
		if (array[middle] == value)
			return (middle);
		/**
		 *  If value is smaller, ignore right half
		*/
		else if (array[middle] > value)
			top = middle;
		/**
		 *  Check if value is present at mid
		*/
		else
		{
			bottom = middle + 1;
		}
	}
	return (-1);
}
