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
	va_list argumentos;

	va_start(argumentos, n);
	if (separator == NULL)
	{
		while (i < n)
		{
			printf("%d", va_arg(argumentos, int));
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			printf("%d", va_arg(argumentos, int));
			if (i != (n - 1))
				printf("%s", separator);
			i++;
		}
	}
	printf("\n");
	va_end(argumentos);
}
