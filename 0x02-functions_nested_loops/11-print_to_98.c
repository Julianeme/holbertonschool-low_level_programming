#include <stdio.h>
#include "holberton.h"

/**
 *print_to_98 - descripción: prints the natural numbers from n to 98.
  *
 *@n: int storing the starting point
 *
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
	printf("98\n");
}
