#include "holberton.h"

/**
 * set_bit - sets the bit of a specific postion (index) to 1
 * @n: The given number
 * @index: the binary requested position
 *Return: 1 on success, otherwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
	return (-1);
	*n ^= (1 << index);
	/*n[index] = n[index] & 0;*/
	return (1);
}
