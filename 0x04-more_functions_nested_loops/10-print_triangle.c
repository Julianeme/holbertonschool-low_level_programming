#include "holberton.h"

/**
 * print_triangle - prints a triangle
 *
 *@size: int, the size of the triangle
 */

void print_triangle(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		for (x = size; x > 0; x--)
		{
			for (y = 0; y < size; y++)
			{
				if (y >= (x - 1))
				{
					_putchar(35);
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
		_putchar (10);
	}
}
