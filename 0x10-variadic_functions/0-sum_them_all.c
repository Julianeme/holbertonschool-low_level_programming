#include<stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all the numbers in the arguments
 *@n: number of arguments
 *Return: the sum of all the arguments
 */


int sum_them_all(const unsigned int n, ...)
{
	int suma = 0, arg;
	unsigned int i = 0;
	va_list argumentos;

	va_start(argumentos, n);
	if (!n)
		return (0);
	while (i < n)
	{
		arg = va_arg(argumentos, int);
		suma += arg;
		i++;
	}
	va_end(argumentos);
	return (suma);
}
