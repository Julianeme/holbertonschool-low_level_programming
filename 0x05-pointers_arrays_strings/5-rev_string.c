#include "holberton.h"

/**
 * rev_string - Prints a string
 *
 *@s: string to be printed
 */

void rev_string(char *s)
{
	int i, x, y;
	char a;
	char b;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < x; y++)
	{
		for (i = (x - 1); i > y; i--)
		{
			a = s[i];
			b = s[(i - 1)];
			s[(i - 1)] = a;
			s[i] = b;
		}
	}
}
