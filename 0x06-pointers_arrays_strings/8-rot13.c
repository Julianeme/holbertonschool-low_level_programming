#include "holberton.h"

/**
 *rot13 - renders a string into rot13 code
 *@s: string to be modified
 * Return: string modified
 */

char *rot13(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		for (; ((s[a] >= 65 && s[a] <= 90) || (s[a] >= 97 && s[a] <= 122));)
		{
			if ((s[a] >= 78 && s[a] <= 90) || (s[a] >= 110 && s[a] <= 122))
			{
				s[a] = s[a] - 13;
			}
			else
			{
				s[a] = s[a] + 13;
			}
			break;
		}
		a++;
	}
return (s);
}
