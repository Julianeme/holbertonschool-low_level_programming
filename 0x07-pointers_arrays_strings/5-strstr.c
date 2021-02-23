#include "holberton.h"

/**
 *_strstr - searches for needle in haystack
 *@haystack: string where to look for needle
 *@needle: string to look for in haystack
 *Return: pointer to location of needle
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		int i;

		for (i = 0; needle[i] == haystack[i] &&
			     needle[i] != '0' && haystack[i] != '\0'; i++)
		{
		}
		if (needle[i] == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
