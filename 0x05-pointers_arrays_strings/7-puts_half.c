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
 * puts_half - Prints half string
 *
 *@str: string to be printed
 */

void puts_half(char *str)
{
	int y;
	int x;

	x = _strlen(str) / 2;
	for (y = x; y <= _strlen(str); y++)
	{
		_putchar(str[y]);

	}
	_putchar (10);
}
