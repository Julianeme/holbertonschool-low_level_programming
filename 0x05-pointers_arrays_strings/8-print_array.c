#include <stdio.h>
#include "holberton.h"

/**
 * print_array - Prints half string
 *
 *@a: array to be printed
 *@n: number of elments to be printed
 */

void print_array(int *a, int n)

{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
