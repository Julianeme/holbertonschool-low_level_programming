#include "holberton.h"

/**
 * print_most_numbers - prints 0-9 except 2 and 4
 *
 */

void print_most_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		if (x != 50 && x != 52)
		_putchar(x);
	}
	_putchar(10);
}
