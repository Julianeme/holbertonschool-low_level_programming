#include "holberton.h"

/**
 * _strlen - Returns the length of a string
 *
 *@s: string to be evaluated
 *Return: the length of the string
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
