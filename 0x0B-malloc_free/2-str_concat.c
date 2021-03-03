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

	unsigned int i, x, length;
	unsigned int a = 0, b = 0;
	char *array;

	while (s1 != '\0')
	{
		a++;
		s1++;
	}
	while (s2[b] != '\0')
	{
		b++;
		s2++;
	}
	length = a + b;
	array = malloc(length * sizeof(char) + 1);
	if (array == 0)
		return (NULL);
	for (i = 0; i < a; i++)
	{
		array[i] = s1[i];
	}
	for (x = 0; x < b; x++)
	{
		array[i + x] = s2[x];
	}
	array[x + i] = 00;
	return (array);
}
