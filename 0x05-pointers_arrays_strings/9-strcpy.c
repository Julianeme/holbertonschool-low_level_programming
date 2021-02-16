#include "holberton.h"

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

	for (y = 0; src[y] != '\0'; y++)
	{
		dest[y] = src[y];

	}
	dest[y] = src[y];
	return (dest);
}
