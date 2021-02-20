#include "holberton.h"

/**
 *print_number - print an int
 *@n: number to be printed
 */

void print_number(int n)
{
	int a = 1000000000;
	int res;
	int c = 0;
	int m = n;
	int cs = 1;

	if (n < 0)
	{
		_putchar(45);
		cs = -1;
	}
	while (a >= 10)
	{
		res = (m / a) * cs;
		if (res > 0)
		{
			c = 1;
		}
		if (c == 1)
		{
			_putchar(res + 48);
		}
		m = m % a;
		a = a / 10;
	}
	m = m * cs;
	_putchar((m % 10) + 48);
}
