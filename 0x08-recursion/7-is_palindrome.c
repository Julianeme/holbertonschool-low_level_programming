#include "holberton.h"
int _strlength_recursion(char *s);
int _compare_recursion(char *s, int ini, int end);

/**
 *_strlength_recursion - returns the length of a string
 *@s: input string
 *Return: the lenght of the string
 */

int _strlength_recursion(char *s)
{
	int a = 0;

	if (*(s + a) != '\0')
	{
		a = 1 + _strlength_recursion(s + 1);
	}
	return (a);
}

/**
 *_compare_recursion - checks 0,1 etc against last, last -1 of a string
 *@s : string to be printed
 *@ini: starting point of the string
 *@end: lenght or last point of the string
 *Return: 1 if palindrome, 0 if not
 */

int _compare_recursion(char *s, int ini, int end)
{
	if (*(s + ini) != *(s + end))
	{
		return (0);
	}
	else if ((*(s + ini) == *(s + end)) && *(s + ini) != '\0')
	{
		_compare_recursion(s, ini++, end--);
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

	length = _strlength_recursion(s);

	if (length == 0)
	{
		return (0);
	}
	else
	{
		answer = _compare_recursion(s, 0, length);
		return (answer);
	}
	return (0);
}
