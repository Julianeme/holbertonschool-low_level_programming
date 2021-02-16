#include "holberton.h"

/**
 * _strlen - Returns the lengh of a string
 *
 *@s: string to be evaluated
 *Return: the length of the string
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

#include "holberton.h"

/**
 * _puts - Prints a string
 *
 *@str: string to be printed
 */

void _puts(char *str)
{
	int x, i;

	x = strlen(str);
	for (i = 0; i <= x; i++)
	{
		_putchar(str[i]);
	}
	_putchar(\n);
}
