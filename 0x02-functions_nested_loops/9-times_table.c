#include "holberton.h"

/**
 *times_table - descripción: Prints nen times tables.
 *
 *short description: Prints nine times tables
 *
 *c, d, dec, unit: descripcion - are ints used as counters.
 */

void times_table(void)

{
	int d, u, dec, uni;

	for (d = 0; d <= 9; d++)
	{
		for (u = 0; u <= 9; u++)
		{
			dec = ((u * d) / 10) + 48;
			uni = ((u * d) % 10) + 48;

				if (dec == 48)
				{
					dec = 32;
				}
			_putchar(dec);
			_putchar(uni);
			if (u != 9)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar(10);
	}
}
