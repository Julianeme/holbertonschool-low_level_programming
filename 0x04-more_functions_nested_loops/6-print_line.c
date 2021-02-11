#include "holberton.h"

/**
 * print_line - prints 0-14 10 times
 *
 *@n: number of times the line is printed
 */

void print_line(int n)
{
	while (--n)
	{
		_putchar(95);
	}
	_putchar(10);
}
