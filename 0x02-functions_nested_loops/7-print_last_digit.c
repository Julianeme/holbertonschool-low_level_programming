#include "holberton.h"

/**
 * print_last_digit - Prints the last digit
 * @n: stores the value to be evaluated
 * Return: returns the value of the last digit
 */

int print_last_digit(int n)
{
	int ln = n % 10;

	if (n < 0)
		ln = ln * -1;
	_putchar(ln + '0');
	return (ln);
}
