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
		putchar (44);
		putchar(32);
	}
	uinit++;
}
return (0);
}
