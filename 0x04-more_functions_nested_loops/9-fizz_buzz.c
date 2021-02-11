#include <stdio.h>

/**
 * main - prints 0-9
 *
 *Return: always 0
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0)
		{
			printf(" fizz");
		}
			else if (x % 5 == 0)
			{
				printf(" buzz");
			}
			else
			{
				printf("%d ");
			}
	}
	putchar(10);
	return (0);
}
