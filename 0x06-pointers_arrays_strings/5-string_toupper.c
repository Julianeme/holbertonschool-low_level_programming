#include "holberton.h"

/**
 *string_toupper - turns all lowercase letters to uppercase
 *@s: string to be modified
 * Return: string modified
 */

char *string_toupper(char *s)
{

	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] >= 97 && s[a] <= 122)
			s[a] = s[a] - 32;
		a++;
	}
	return (s);
}
