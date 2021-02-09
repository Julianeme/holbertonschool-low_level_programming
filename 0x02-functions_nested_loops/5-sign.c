#include "holberton.h"

/**
 *print_sign - descripción: prints the sign of a number.
 *
 *short description: Takes a  number and verifies its sign
 *
 *@n: descripcion - Stores the number to be verified.
 * Return: the sign of a number
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
