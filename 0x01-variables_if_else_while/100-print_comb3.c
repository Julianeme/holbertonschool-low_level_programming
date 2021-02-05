#include <stdio.h>
/**
 * main - prints the alphabet
 * Return: 0
 */
int main(void)
{
	int x;
	int z;
	int uinit;

	uinit = 49;

for (x = 48; x < 57; x++)
{
	for (z = uinit; z <= 57; z++)
	{
		putchar(x);
		putchar(z);
		if (x == 56 && z == 57)
		{
			putchar (10);
		}
		else
		{
			putchar (44);
			putchar(32);
		}
	}
	uinit++;
}
return (0);
}
