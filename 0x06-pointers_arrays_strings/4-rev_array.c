#include "holberton.h"

/**
 * reverse_array - reverses an array
 *
 * @a: the input array
 * @n: the size of the array
 */

void reverse_array(int *a, int n)
{
	int i, y;
	int c;
	int b;

	for (y = 0; y < n; y++)
	{
		for (i = (n - 1); i > y; i--)
		{
			c = a[i];
			b = a[(i - 1)];
			a[(i - 1)] = c;
			a[i] = b;
		}
	}
}
