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
		printf("%s ", va_arg(words, char*);
		i++;
	}
printf("\n");
va_end(words);
}

/**
 * print_fl - prints float numbers
 *@n: number of arguments
 */


void print_fl(const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list flnum;

	va_start(flnum, n);
	while (i < n)
	{
		printf("%.2f ", va_arg(flnum, int));
		i++;
	}
}
printf("\n");
va_end(flnum);
}

/**
 * print_char - prints chars
 *@n: number of arguments
 */


void print_char(const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ch;

	va_start(ch, n);
	while (i < n)
	{
		printf("%c ", va_arg(ch, char*);
		i++;
	}
	printf("\n");
	va_end(ch);
}
