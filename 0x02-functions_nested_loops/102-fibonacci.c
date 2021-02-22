#include <stdio.h>
/**
 *main - descripción: prints first 50 fib numbers
 *
 *Return: always 0
 */

int main(void)

{
	unsigned long a = 0;
	unsigned long b = 1;
	int x;
	unsigned long fib;

	for (x = 0; x < 50; x++)
	{
		fib = a + b;
		a = b;
		b = fib;
		printf("%lu", fib);
		if (x < 49)
		{
			printf(",");
		}
	}

	printf("\n");
	return (0);
}
