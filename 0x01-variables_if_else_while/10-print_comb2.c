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
		if (x == 57 && z == 57)
		{
			putchar (10);
		}
		else
		{
			putchar (44);
			putchar(32);
		}
	}
}
return (0);
}
