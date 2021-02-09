#include "holberton.h"

/**
 * 6-abs.c returns the absolute value of a numer
 *
 */

int _abs(int)
{
	int x;

	if (x < 0)
		x = x * (-1);
	else
		x = x;
	return (x);
}
