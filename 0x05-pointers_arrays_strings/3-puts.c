#include "holberton.h"

/**
 * _puts - Prints a string
 *
 *@str: string to be printed
 */

void _puts(char *str)
{
	x = strlen (str);
	for (i = 0; i <= x; i++)
	{
		_putchar(str[i]);
	}
	_putchar(\n);
}
