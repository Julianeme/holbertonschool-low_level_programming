#include "holberton.h"

/**
 * puts_half - Prints half string
 *
 *@str: string to be printed
 */

void puts_half(char *str)
{
	int y;
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	for (y = (a / 2); y <= (a - 1); y++)
	{
		_putchar(str[y]);

	}
	_putchar (10);
}
