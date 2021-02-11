#include "holberton.h"

/**
 * more_numbers - prints 0-14 10 times
 *
 */

void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
			{
				_putchar((y / 10) + 48);
			}
			_putchar((y % 10) + 48);
		}
		_putchar(10);
	}
}
