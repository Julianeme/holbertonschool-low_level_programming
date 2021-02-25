#include "holberton.h"

/**
 *_strlen_recursion - returns the length of a string
 *@s: input string
 *Return: the lenght of the string
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s != '\0')
	{
	a = 1 + _strlen_recursion(s + 1);
	}
	return (a);
}
