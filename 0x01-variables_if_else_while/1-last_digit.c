#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - prints the last digit of a randomly generated number
 *Return: 0
 */


int main(void)
{

	int n;
	int ld = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (ld > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	else if (ld == 0)
		printf("Last digit of %d is %d and is 0 5\n", n, ld);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", ld);

	return (0);
}
