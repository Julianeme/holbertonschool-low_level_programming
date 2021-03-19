#include "lists.h"
#include <stdlib.h>
/**
 * print_c - prints chars
 * @arguments: chart to print
 * Return: number of character printed
 */
int print_c(va_list arguments)
{
	char str = va_arg(arguments, char*);

	if (str == 00)
	{
		return (0);
	}
	write(1, &str, 1);
	return (1);
}
/**
 * print_s - prints strings
 * @arguments: va list
 * Return: number of character printed
 */
int print_s(va_list arguments)
{
	int i = 0;
	char *str = va_arg(arguments, char*);

	if (str == 00)
	{
		return (0);
	}
	while (str[i])
	{
		write(1, (str + i), 1);
		i++;
	}
	return (i);
}
/**
 *print_i - print an int
 *@arguments: va list
 *Return: number of character printed
 */
int print_i(va_list arguments)
{
	int m = va_arg(arguments, int);
	int a = 1000000000;
	int res;
	int c = 0;
	int cs = 1;
	int count = 0;

	if (m < 0)
	{
		_putchar(45);
		cs = -1;
		count++;
	}
	while (a >= 10)
	{
		res = (m / a) * cs;
		if (res > 0)
		{
			c = 1;
		}
		if (c == 1)
		{
			_putchar(res + 48);
			count++;
		}
		m = m % a;
		a = a / 10;
	}
	m = m * cs;
	_putchar((m % 10) + 48);
	count++;
	return (count);
}
