#include "calc.h"

/**
 *get_op_func - selects the right function
 *@s: operator
 * Return: the result of the selected operation
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i][0] != NULL)
	{
		if (s == ops[i][0])
		{
			return (ops);
			i++;
		}
	}
	return (NULL);
}
