#include "holberton.h"

/**
 *_strspn - gets the length of a prefix substring
 *@s: string which accecpt bytes will be compared to
 *@accept: string with the bytes to compare in s
 *Return: the number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int bytecount = 0;
	int n = 0;

	while (s[n] != '\0'  && s[n] != 32)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == s[n])
			{
				bytecount++;
			}
		}
		n++;
	}
return (bytecount);
}
