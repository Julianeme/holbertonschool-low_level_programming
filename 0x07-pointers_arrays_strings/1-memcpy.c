#include "holberton.h"

/**
 *_memcpy - copies a memory area
 *@dest: destination (copy to)
 *@src: source memory (copy from)
 *@n: size of memory to be copied
 *Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
return (dest);
}
