#include <stdio.h>
/**
 * main - prints the alphabet
 * Return: 0
 */
int main(void)
{
	int x;
	int z;

for (x = 48; x <= 57; x++)
{
	for (z = 48; z <= 57; z++)
	{
		putchar(x);
		putchar(z);
		if (x && z != 57)
		{
			putchar (44);
			putchar(32);
		}
	}
}
putchar(10);
return (0);
}
