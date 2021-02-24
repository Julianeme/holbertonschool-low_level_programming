#include "holberton.h"

/**
 *_puts_recursion - Prints a string
 *@s: string to be printed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
