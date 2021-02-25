#include "holberton.h"
int auxiliar(int divisor, int m);

/**
 * auxiliar - isolates the value of n to compare
 *@divisor: increasing divisor starting at 2
 *@m: saves the value of n
 *Return: 1 if n is prime, 0 if does not
 *
 */

int auxiliar(int divisor, int m)
{

	if (divisor > (m / 2))
	{
		return (1);
	}
	else if (m % divisor == 0)
	{
		return (0);
	}
	if (divisor <= (m / 2))
		return (divisor = (auxiliar(divisor + 1, m)));
	return (divisor);
}

/**
 * is_prime_number - checks if an int is a prime number
 *@n: int
 *Return: 1 if n is prime, 0 if does not
 */

int is_prime_number(int n)
{
	int prim = 2;

	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (prim = auxiliar(prim, n));
}
