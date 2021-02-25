#include "holberton.h"
int auxiliar(int res, int m);

/**
 * auxiliar - isolates the value of n to compare
 *@res: decreasing value starting from n
 *@m: saves the value of n
 *Return: square root of n for positive numbers
 *
 */

int auxiliar(int res, int m)
{
	int resultado;

	if ((res * res) == m)
	{
		resultado = res;
	}
	else if ((res * res) > m)
	{
		return (-1);
	}
	else
	{
		resultado = (auxiliar(res + 1, m));
	}
	return (resultado);
}

/**
 * _sqrt_recursion - returns the square root of n
 *@n: int
 *Return: square root of n
 */

int _sqrt_recursion(int n)
{
	int res1 = 1;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		res1 = auxiliar(res1, n);
	}
	return (res1);
}
