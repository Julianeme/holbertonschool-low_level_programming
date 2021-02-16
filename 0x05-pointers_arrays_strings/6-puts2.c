#include "holberton.h"

/**
 * _strlen - Prints lenght of string
 *
 *@s: string to be measured
 *Return: a
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * puts2 - Prints every other
 *
 *@str: string to be printed
 */

void puts2(char *str)
{
	int y;
	int x;

	x = _strlen(str);
	for (y = 0; y <= x / 2; y++)
	{
		_putchar(str[(2 * y)]);

	}
	_putchar (10);
}
