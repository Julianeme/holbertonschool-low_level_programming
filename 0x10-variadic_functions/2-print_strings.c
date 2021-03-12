#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 *@n: number of arguments
 *@separator: sepator characters between strings
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list words;

	va_start(words, n);

		while (i < n)
		{

			if (words == NULL)
				printf("(nil)");
			else
			{
				printf("%s", va_arg(words, char *));
				if ((i != (n - 1)) && (separator != NULL))
					printf("%s", separator);
			}
			i++;
		}
	printf("\n");
	va_end(words);
}
