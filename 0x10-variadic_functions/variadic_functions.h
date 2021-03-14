#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

typedef struct prt
{
	char *prt;
	void (constant unsigned int n, ...);
} _print;

void prt_num(const unsigned int n, ...)
void prt_str(const unsigned int n, ...)
void prt_fl(const unsigned int n, ...)
void prt_char(const unsigned int n, ...)

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_float(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

int _putchar(char c);

#endif /* VARIADIC_FUNCTIONS_H */
