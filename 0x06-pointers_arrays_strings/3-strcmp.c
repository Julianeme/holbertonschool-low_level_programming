#include "holberton.h"

/**
 * _strcmp - compares two strings
 *
 *@s1: string 1 to be compared
 *@s2: string 2 to be compared
 *Return: always 0
 */

int _strcmp(char *s1, char *s2)
{
		int a = 0;
		int b = 0;
		int answer;

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
			answer = -15;
		}
		else if (a > b)
		{
			answer = 15;
		}
		else
		{
			answer = 0;

		}
		return (answer);
}
