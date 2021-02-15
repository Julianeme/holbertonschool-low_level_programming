#include "holberton.h"

/**
 * print_rev - Prints a string
 *
 *@s: string to be printed
 */

void print_rev(char *s)
{
	int x;
	int i;

	x = _strlen(s);
	for (i = x; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
