#include "holberton.h"

/**
 * _pow_recursion - returns the length of a string
 *@x: base
 *@y: power
 *Return: x to power y
 */

int _pow_recursion(int x, int y)
{
	int res = 0;

	if (y == 0)
	{
		res = 1;
	}
	else if (y > 0)
	{
		res = x * _pow_recursion(x, (y - 1));
	}
	else
	{
		res = x / _pow_recursion(x, (y + 1));
	}
	return (res);
}
