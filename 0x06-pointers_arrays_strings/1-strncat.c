#include "holberton.h"

/**
 * _strncat - Concatenates two strings
 *
 *@dest: destination string
 *@src: source string
 *@n: bytes to be used form src
 *Return: the concatenanted string
 */

char *_strncat(char *dest, char *src, int n)

{
	int x = 0;
	int a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (x < n)
	{
		dest[a] = src[x];
		x++;
		a++;
	}
dest[a] = '\0';
return (dest);
}
