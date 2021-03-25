#include <stdio.h>

/**
 * print_binary - convert and prints a binary tumber into decimal ui
 * @n: The number to be converted into binary
 *Return: number in binary
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((48 + (n & 1)));
}
