#include "holberton.h"

/**
 * set_bit - sets the bit of a specific postion (index) to 1
 * @n: The given number
 * @index: the binary requested position
 *Return: 1 on success, otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 0, *p;

	num = (1 << index);
	p = &num;
	if (index > 31)
		return (-1);
	*n = *n | *p;
	return (1);
}
