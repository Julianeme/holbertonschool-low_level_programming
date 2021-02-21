#include <stdio.h>
/**
 *main - descripción: prints first 50 fib numbers
 *
 *Return: always 0
 */

int main(void)

{
	long a = 0;
	long b = 1;
	int x;
	long fib;

	for (x = 0; x < 50; x++)
	{
		fib = a + b;
		a = b;
		b = fib;
		printf("%ld", fib);
		if (x < 49)
		{
			printf(",");
		}
	}
	printf("\n");
	return (0);
}
