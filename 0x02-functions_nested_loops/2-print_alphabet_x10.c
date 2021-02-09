#include "holberton.h"

/**
 * print_alphabet_x10 - function that prints the alphabet
 *in lower case 10 times.
 *
 */

void print_alphabet_x10(void)
{
	char x;
	int y;

	for (y = 48; y <= 57; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar(10);
	}
}

