#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 *@n: number of arguments
 *@separator: sepator characters between numbers
 *Return: the sum of all the arguments
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char sep;
	va_list argumentos;

	va_start(argumentos, n);
	sep = *separator;
	if (!separator)
	{
		while (i < n)
		{
			printf("%i", (va_arg(argumentos, int)));
			if (i != (n - 1))
				printf(" ");
			else
				printf("\n");
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			printf("%i%c", (va_arg(argumentos, int)), sep);
			if (i != (n - 1))
				printf(" ");
			else
				printf("\n");
			i++;
		}
	}
	va_end(argumentos);
}
