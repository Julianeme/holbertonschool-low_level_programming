#include "holberton.h"

/**
 * print_rev - Prints a string
 *
 *@s: string to be printed
 */

void print_rev(char *s)
{
	int i;
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	for (i = a; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
