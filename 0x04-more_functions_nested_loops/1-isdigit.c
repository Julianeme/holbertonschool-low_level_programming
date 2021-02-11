#include "holberton.h"

/**
 * _idigit - function that checks for numbers
 *
 *@c: int tha stores the value to be checked
 *
 *Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
