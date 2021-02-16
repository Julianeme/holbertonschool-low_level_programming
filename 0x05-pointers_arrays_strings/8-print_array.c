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
 
	if (n != 0 && n
	{
		for (x = 0; x < n; x++)
		{
			printf("%d", a[x]);
			if (x != n - 1)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
	else
	{
		printf("\n");
	}
}
