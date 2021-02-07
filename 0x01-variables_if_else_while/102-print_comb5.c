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
	int m;

for (m = 48; m <= 57; m++)
{
	for (c = 48; c <= 56; c++)
	{
		for (d = m; d <= 57; d++)
		{
			for (u = c + 1; u <= 57; u++)
			{
				putchar (m);
				putchar (c);
				putchar (32);
				putchar (d);
				putchar (u);
				if (u == 57 && d == 57 && c == 56 && m == 57)
				{
					putchar (10);
				}
				else if (u == 57 && d < 57)
				{
					putchar (44);
					putchar(32);
					putchar (m);
					putchar (c);
					putchar (32);
					putchar (d + 1);
					putchar (48);
					putchar (44);
					putchar(32);
				}
				else
				{
					putchar (44);
					putchar(32);
				}
			}
		}
	}
}
return (0);
}
