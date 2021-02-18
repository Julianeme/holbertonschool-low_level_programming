#include "holberton.h"

/**
 * _strncpy - copy src to dest
 *
 *@dest: string to be copied on
 *@src: string to be copied from
 *@n: number of bytes to be copied
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
