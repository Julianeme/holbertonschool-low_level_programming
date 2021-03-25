#include "holberton.h"

/**
 * get_bit - returns the bit of a specific postion (index)
 * @n: The number to be converted into binary
 * @index: the binary requested position
 *Return: number in binary
 */

int get_bit(unsigned long int n, unsigned int index)
{

	if (index > 31)
		return (-1);

	if (((n >> index) & 1) == 1)
		return (1);
	return (0);
}
