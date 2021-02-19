#include "holberton.h"

/**
 *rot13 - renders a string into rot13 code
 *@s: string to be modified
 * Return: string modified
 */

char *rot13(char *s)
{
	int a = 0;
	int b;
	char rot13[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
			'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
			't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c',
			'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'A',
			'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
			'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
			'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E',
			'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};

	while (s[a] != '\0')
	{
		for (b = 0; b < 78; b++)
		{
			if (s[a] == rot13[b])
			{
				s[a] = rot13[(b + 13)];
				b = 80;
			}
		}
		a++;
	}
return (s);
}
