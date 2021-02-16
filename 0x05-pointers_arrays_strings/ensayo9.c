#include "holberton.h"

/**
 * _strlen - Prints lenght of string
 *
 *@s: string to be measured
 *Return: a
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

/**
 * _strcpy - copy src to dest
 *
 *@dest: string to be copied on
 *@src: string to be copied from
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int y;
	int x;

	x = _strlen(src);
	for (y = 0; y <= x; y++)
	{
		dest[y] = src[y];

	}
	return (dest);
}
