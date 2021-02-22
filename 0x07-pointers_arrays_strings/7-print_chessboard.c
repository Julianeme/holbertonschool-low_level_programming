#include "holberton.h"

/**
 *print_chessboard - Prints the chessboard
 *@a: chessboard characters
 */

void print_chessboard(char (*a)[8])
{
	int j, k;

	for (j = 0; j < 8; j++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[j][k]);
		}
		_putchar(10);
	}
}
