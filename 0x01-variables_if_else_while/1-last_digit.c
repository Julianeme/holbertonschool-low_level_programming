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
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is")

	if (n <= 10)
		ld = n;
	else
		ld = n % 10;
	if (ld > 5)
		printf("is %d and is greater than 5\n", ld);
	else if (ld == 0)
		printf("is %d and is 0\n");
	else
		printf("is %d and is less than 6 and not =\n)", ld)

	return (0);
}
