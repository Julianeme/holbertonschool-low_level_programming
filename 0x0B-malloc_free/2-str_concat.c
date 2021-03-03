#include "holberton.h"
#include <stdlib.h>

/**
 *str_concat - concatenates two arrays
 *@s1: array 1
 *@s2: array 2
 *Return: 0 - NULL if unsuccesuf, otherwise pointer to concatenated array
 */

char *str_concat(char *s1, char *s2)
{

	unsigned int i, length;
	unsigned int a = 0, b = 0;
	char *array;

	if (s1 == 00)
		a = 0;
	else
	{
		while (s1[a] != '\0')
			a++;
	}
	if (s2 == 00)
		b = 0;
	else
	{
		while (s2[b] != '\0')
			b++;
	}
	length = a + b;
	array = malloc(length * sizeof(char) + 1);
	if (array == 00)
		return (NULL);
	for (i = 0; i < a; i++)
	{
		array[i] = s1[i];
	}
	for (i = 0; i < b; i++)
	{
		array[a + i] = s2[i];
	}
	array[a + b] = 00;
	return (array);
}
