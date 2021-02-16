#include "holberton.h"

/**
 * _puts - Prints a string
 *
 *@str: string to be printed
 */

void _puts(char *str)
{
	int x, i, a;

	while (str[a] != '\0')
	{
		a++;
	}
	x = a;
	for (i = 0; i <= x; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
