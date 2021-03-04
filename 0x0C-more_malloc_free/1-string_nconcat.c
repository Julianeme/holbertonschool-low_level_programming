#include "holberton.h"
#include <stdlib.h>

/**
 *char *string_nconcat - concatenates 2 strings untin n position of 2nd
 *@s1: string 1
 *@s2: string 2
 *@n: position of string 2 to concatenate up to
 *Return: a pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int i, j;
	unsigned int k = 0, l = 0, l1 = 0, l2 = 0, length = 0;

	for (i = 0; s1[i] != '\0'; i++)
		l1++;
	l1++;
	for (j = 0; s2[j] != '\0'; j++)
		l2++;
	if (s1 == NULL)
		l1 = 0;
	if (s2 == NULL)
		l2 = 0;
	length = l1 + l2;
	if (n < l2)
		length = l1 + n;
	array = malloc(length * sizeof(char));
	if (array == 0)
		return (NULL);
	for (i = 0; i < (l1 - 1); i++)
	{
		array[k] = s1[i];
		k++;
	}
	for (j = (l1 - 1); j < length - 1; j++)
	{
		array[k] = s2[l];
		k++;
		l++;
	}
	array[k] = '\0';
return (array);
}
