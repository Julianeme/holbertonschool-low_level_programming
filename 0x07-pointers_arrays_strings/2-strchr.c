#include "holberton.h"

/**
 *_strchr - searches for c in s
 *@s: string where the c char will be looked for
 *@c: char to be looked for in s
 *Return: pointer to location of c
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	else
	{
		return (NULL);
	}
}
