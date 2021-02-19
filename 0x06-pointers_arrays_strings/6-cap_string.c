#include "holberton.h"

/**
 *cap_string - Capitalizes all words of a string
 *@s: string to be modified
 * Return: string modified
 */

char *cap_string(char *s)
{

	int a;
	int b;

	char exc[] = {' ', ',', ';', '.', '!', '?',
'"', '(', ')', '{', '}', '\n', '\t'};

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 13; b++)
		{
			if (s[a] == exc[b])
			{
				if (s[(a + 1)] >= 97 && s[(a + 1)] <= 122)
				{
					s[(a + 1)] = s[(a + 1)] - 32;
				}
			}
		}
	}

	return (s);
}
