#include "holberton.h"

/**
 *_strspn - gets the length of a prefix substring
 *@s: string which accecpt bytes will be compared to
 *@accept: string with the bytes to compare in s
 *Return: the number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int bytecount = 0;
	int n = 0;

	while (accept[n] != '\0')
	{
		n++;
	}
	for (i = 0; (i <= n && s[i] != '\0'); i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				bytecount++;
			}
		}
	}
	return (bytecount);
}
