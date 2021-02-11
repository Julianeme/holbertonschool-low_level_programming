#include "holberton.h"

/**
 * print_line - prints 0-14 10 times
 *
 *@n: number of times the line is printed
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar(95);
		n--;
	}
	_putchar(10);
}
