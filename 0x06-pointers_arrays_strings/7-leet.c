#include "holberton.h"

/**
 *leet - renders a string into 1337 code
 *@s: string to be modified
 * Return: string modified
 */

char *leet(char *s)
{
	int a;
	int b;

char cod1377[] = {65, 52, 97, 52, 69, 51, 101, 51, 79,
		  48, 111, 48, 84, 55, 116, 55, 76, 49, 108, 49};
	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 20; b++)
		{
			if (((s[a] >= 65 && s[a] <= 90) || (s[a] >= 97 && s[a] <= 122))
			    &&  s[a] == cod1377[b])
			{
				s[(a)] = cod1377[(b + 1)];
			}
		}
	}
return (s);
}
