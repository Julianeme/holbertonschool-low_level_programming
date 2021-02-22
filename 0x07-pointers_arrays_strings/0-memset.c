#include "holberton.h"

/**
 *_memset - fills memory with a constant byte
 *@s: filling startin point
 *@b: filling character or constant
 *@n: filling end poing
 *Return: array s modified
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}
