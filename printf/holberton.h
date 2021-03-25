#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct prt - structure for printing various types
 *
 * @dt: The type of argument
 * @f: The function pointer to the print function
 */
typedef struct prt
{
	char *dt;
	int (*f)(va_list);
} _print;
int print_s(va_list arguments);
int print_c(va_list arguments);
int _printf(const char *format, ...);
int _putchar(char c);
int print_i(va_list m);
int get_fun(const char *format, va_list arguments);
#endif
