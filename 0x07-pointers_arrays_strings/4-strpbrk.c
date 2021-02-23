#include "holberton.h"

/**
 *_strpbrk - searches for acceptc in s
 *@s: string where the c char will be looked for
 *@accept: string to be looked for in s
 *Return: pointer to location of c
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
