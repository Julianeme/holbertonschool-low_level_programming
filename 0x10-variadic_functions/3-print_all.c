#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_num - print numbers
 *@n: number of arguments
 */


void print_num(const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list numbers;

	va_start(numbers, n);
		while (i < n)
		{
			printf("%d ", va_arg(numbers, int));
			i++;
		}
	}
	printf("\n");
	va_end(numbers);
}

/**
 * print_str - prints strings
 *@n: number of arguments
 */


void print_str(const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list words;

	va_start(words, n);
	while (i < n)
	{
		printf("%s ", s);
		i++;
	}
printf("\n");
va_end(words);
}
