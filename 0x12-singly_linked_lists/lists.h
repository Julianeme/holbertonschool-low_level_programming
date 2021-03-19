#ifndef _LISTS_H_
#define _LISTS_H_
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

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

int _printf(const char *format, ...);

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

int print_s(va_list arguments);
int print_c(va_list arguments);
int _printf(const char *format, ...);
int _putchar(char c);
int print_i(va_list m);
#endif
