#include "holberton.h"

/**
 *_strpbrk - searches for acceptc in s
 *@s: string where the c char will be looked for
 *@accept: string to be looked for in s
 *Return: pointer to location of c
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int pos = NULL;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; *(s + j) != 0; j++)
		{
			if (! pos && accept[i] == s[j])
			{
				pos = j;
			}
			else if (accept[i] == s[j] && j < pos)
			{
				pos = j;
			}
		}
	}
	return (s + pos);
}
