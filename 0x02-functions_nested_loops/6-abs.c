#include "holberton.h"

/**
 * _abs - description:  returns the absolute value
 *of a number
 *
 *@x: takes the value to be evaluated
 *
 *Return: Absolute value of x
 */

int _abs(int x)
{
	if (x < 0)
		x = x * (-1);
	else
		x = x;
	return (x);
}
