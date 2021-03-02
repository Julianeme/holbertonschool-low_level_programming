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

	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}
	length = a + b;
	if (s1 == 0 && s2 == 0)
		length = 0;
	array = malloc(length * sizeof(char) + 1);
	if (array == 0)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		array[i] = s1[i];
	}
	for (x = 0; s2[x] != '\0'; x++)
	{
		array[i + x] = s2[x];
	}
	array[x + i] = 00;
	return (array);
}
