#include "holberton.h"

/**
 * puts2 - Prints every other
 *
 *@str: string to be printed
 */

void puts2(char *str)
{
	int y;
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	for (y = 0; y <= (a - 1) / 2; y++)
	{
		_putchar(str[(2 * y)]);

	}
	_putchar (10);
}
