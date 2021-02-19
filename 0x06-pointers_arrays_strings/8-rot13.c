#include "holberton.h"

/**
 *rot13 - renders a string into rot13 code
 *@s: string to be modified
 * Return: string modified
 */

char *rot13(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if ((s[a] >= 65 && s[a] <= 77) || (s[a] >= 97 && s[a] <= 109))
		{
			s[a] = s[a] + 13;
		}
		else if ((s[a] >= 78 && s[a] <= 90) || (s[a] >= 110 && s[a] <= 122))
		{
			s[a] = s[a] - 13;
		}
	}
return (s);
}
