#include "holberton.h"

/**
 * print_diagonal - prints a diagonal of
 *
 *@n: int the times the character will be printed
 */

void print_diagonal(int n)
{
	int y;
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				if (y == x)
				{
					_putchar(92);
					y = n + 1;
				}
				else
				{
					_putchar(32);
				}
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
