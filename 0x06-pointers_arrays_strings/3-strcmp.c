#include "holberton.h"

/**
 * _strcmp - compares two strings
 *
 *@s1: string 1 to be compared
 *@s2: string 2 to be compared
 *Return: always -15, 0 or 15
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;
		while (s1[x] == s2[x])
		{
			x++;
			if (s1[x] == '\0')
			{
				return (0);
			}
		}
		return (s1[x] - s2[x]);
}
