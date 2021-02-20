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
		fib = a + b;
		a = b;
		b = fib;
		printf("%u", fib);
			if (x < 50)
			{
				printf(", ");
			}
	}
	printf("\n");
	return (0);
}
