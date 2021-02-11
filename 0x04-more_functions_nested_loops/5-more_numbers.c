#include "holberton.h"

/**
 * more_numbers - prints 0-14 10 times
 *
 */

void more_numbers(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			if (y <= 57)
			{
			_putchar(y);
			}
			if (y == 57)
			{
				for (z = 48; z <= 52; z++)
				{
				_putchar(49);
				_putchar(z);
				}

			}
		}
		_putchar(10);
	}
}
