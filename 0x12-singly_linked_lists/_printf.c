#include <stdlib.h>
#include "lists.h"
/**
 * _printf - ARGUMENT(s) according to FORMAT, or execute according to OPTION
 * @format: entry format defined by user
 * Return: amount of printed characters
 */
int _printf(const char *format, ...)
{
	_print print_any[] = {{"c", print_c}, {"s", print_s}, {"d", print_i},
		{"i", print_i}, {00, 00}};
	va_list arguments;
	unsigned int x = 0, i = 0, count = 0;

	va_start(arguments, format);
	if (format == 00)
		return (-1);
	while (format && format[x])
	{
		if (format[x] != '%')
		{
			write(1, (format + x), 1);
			count++;
		}
		if (format[x] == '%' && format[x + 1] == '%')
		{
			write(1, (format + x), 1);
			count++;
		}
		if (format[x] == '%' && format[x + 1] != 00)
		{
			i = 0;
			while (print_any[i].dt)
			{
				if (*print_any[i].dt == format[x + 1])
					count += print_any[i].f(arguments);
				i++;
			}
			x++;
		}
		x++;
	}
	va_end(arguments);
	return (count);
}
