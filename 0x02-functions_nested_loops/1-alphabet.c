#include "holberton.h"

/**
 * print_alphabet - function that prints the alphabet in lower case.
 *
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar(10);
}
