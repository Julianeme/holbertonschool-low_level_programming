#include <stdio.h>
/**
 *main - descripción: prints first 50 fib numbers
 *
 *Return: always 0
 */

int main(void)

{
	unsigned int a = 0;
	unsigned int b = 1;
	int x;
	unsigned int fib;

	for (x = 0; x < 50; x++)
	{
		if (x == 0)
		{
			printf("%u", b);
		}
		else
		{
		printf("%u", fib);
		}
		if (x < 49)
		{
			printf(", ");
		}
		fib = a + b;
		a = b;
		b = fib;
	}
	printf("\n");
	return (0);
}
