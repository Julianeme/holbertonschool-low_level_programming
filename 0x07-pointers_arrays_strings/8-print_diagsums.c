#include <stdio.h>
#include "holberton.h"

/**
 *print_diagsums - Prints the sum of the diagonals
 *@a: input matrix
 *@size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int j;
	long int sum1 = 0;
	long int sum2 = 0;
	int pos1 = 0, pos2 = 0;

	for (j = 0; j < size; j++)
	{
		pos1 = j * (size + 1);
		pos2 = (j + 1) * (size - 1);
		sum1 = sum1 + a[pos1];
		sum2 = sum2 + a[pos2];
	}
	printf("%ld, %ld\n", sum1, sum2);
}
