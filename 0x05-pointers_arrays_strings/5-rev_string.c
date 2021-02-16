#include "holberton.h"

/**
 * rev_string - Prints a string
 *
 *@s: string to be printed
 */

void rev_string(char *s)
{
	int x;
	int i;
	int y;
	char a;
	char b;

	x = _strlen(s);
	for(y = 0; y < x; y ++)
	{
		for (i = x; i >= y; i--)
		{
			a = s[i];
			b = s[(i--)];
			s[(i--)] = a;
			s[i] = b;
		}
	}
}
