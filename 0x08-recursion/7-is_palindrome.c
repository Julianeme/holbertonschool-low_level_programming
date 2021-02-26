#include "holberton.h"
int _strlen_recursion(char *s);
int _puts_recursion(char *s, int ini, int end);

/**
 *_strlen_recursion - returns the length of a string
 *@s: input string
 *Return: the lenght of the string
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	if (*(s + a) != '\0')
	{
		a = 1 + _strlen_recursion(s + 1);
	}
	return (a);
}

#include "holberton.h"

/**
 *_puts_recursion - checks 0,1 etc against last, last -1 of a string
 *@d: string to be printed
 *@ini: starting point of the string
 *@end: lenght or last point of the string
 *Return: 1 if palindrome, 0 if not
 */

int _puts_recursion(char *d, int ini, int end)
{
	if (*(d + ini) != *(d + end))
	{
		return (0);
	}
	else if ((*(d + ini) == *(d + end)) && *(d + ini) != '\0')
	{
		_puts_recursion(*d, ini++, end--);
		return (1);
	}
	return (0);
}

/**
 * is_palindrome - checks if a string is palindrome
 *@s: string to be verified
 *Return: 1 if s is palindrome, 0 if it is not
 */

int is_palindrome(char *s)
{
	int length;
	int answer;

	length = _strlen_recursion(char *d);

	if (length == o)
	{
		return (0);
	}
	else
	{
		answer = _puts_recursion(char *d, length);
		return (answer);
	}
	return (0);
}
