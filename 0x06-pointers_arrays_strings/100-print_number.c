#include "holberton.h"

/**
 *print_number - renders a string into rot13 code
 *@n: number to be printed
 */

void print_number(int n)
{
	int a = 1000000000;
	int res;
	int c = 0;
	int m = n;

	if (n < 0)
	{
		_putchar(45);
		m = n * (-1);
	}
	while (a >= 10)
	{
		res = m / a;
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
	_putchar((m % 10) + 48);
}
