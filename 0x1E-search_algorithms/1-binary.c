#include "search_algos.h"

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
	size_t floor, top, i;
	int middle;

	floor = array[0];
	top = array[size - 1];
	if (array)
	{
		while (floor < top)
		{
			i = floor;
			printf("Searching in array: ");
			while (i <= top)
			{
				printf("%d", array[i]);
				if (i != size - 1)
					printf(", ");
				i++;
			}
			printf("\n");
			middle = floor + (top - floor) / 2;

			/**
			 *  Check if value is present at mid
			*/
			if (array[middle] == value)
				return (middle);
			/**
			 * If value greater, ignore left half
			*/
			if (array[middle] < value)
				floor = middle + 1;
			/**
			 *  If value is smaller, ignore right half
			*/
			else
				top = middle - 1;
		}
	}
	return (-1);
}
