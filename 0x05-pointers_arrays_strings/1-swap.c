#include "holberton.h"

/**
 * swap_int - Swap the values of two variables
 *
 *@a: value 1
 *@b: value 2
 */

void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
