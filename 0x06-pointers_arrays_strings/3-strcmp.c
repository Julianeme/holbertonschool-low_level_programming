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
		int a = 0;
		int b = 0;

		while (s1[a] != '\0')
		{
			a++;
		}
		while (s2[b] != '\0')
		{
			b++;
		}
		if (a < b)
		{
			return (-15);
		}
		else if (a > b)
		{
			return (15);
		}
		else
		{
			return (0);

		}
}
