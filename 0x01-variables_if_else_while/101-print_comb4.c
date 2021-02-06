#include <stdio.h>
/**
 * main - prints all caombinations of three digits
 * Return: 0
 */
int main(void)
{
	int u;
	int d;
	int c;
	int iu;
	int id;

for (c = 48; c <= 55; c++)
{
	iu = c + 2;
	id = c + 1;
	for (d = id; d <= 56; d++)
	{
		for (u = iu; u <= 57; u++)
		{
			putchar(c);
			putchar (d);
			putchar(u);
			if (u == 57 && d == 56 && c == 55)
			{
				putchar (10);
			}
			else
			{
				putchar (44);
				putchar(32);
			}
		}
	iu++;
	}
	id++;
}
return (0);
}
