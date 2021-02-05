#include <stdio.h>
/**
 * main - prints the alphabet
 * Return: 0
 */
int main(void)
{
	int z;

	for (z = 48; z <= 57; z++)
	{
		putchar(z);
		if (z < 57)
		{
			putchar(44);
			putchar(32);
		}
		else
		{
			putchar(36);
		}
	}
putchar(10);
return (0);
}
