#include <stdio.h>
#include "holberton.h"

/**
 * _strcat - Concatenates two strings
 *
 *@dest: destination string
 *@src: source string
 *Return: the concatenanted string
 */

char *_strcat(char *dest, char *src)

{
	int x = 0;
	int a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[x] != '\0')
	{
		dest[a] = src[x];
		x++;
		a++;
	}
dest[x] = '\0';
return(dest);
}
