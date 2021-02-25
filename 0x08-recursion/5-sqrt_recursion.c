#include "holberton.h"

/**
 * auxiliar - isolates the value of n to compare
 *@res: decreasing value starting from n
 *@m: saves the value of n
 *Return: square root of n
 */

int auxiliar(int res, int m)
{
	int resultado;

if ((res * res) != m && res > 0)
{
	resultado = 1 + auxiliar(res - 1, m);
}
return (resultado);
}

#include "holberton.h"

 /**
  * _sqrt_recursion - returns the square root of n
  *@n: int
  *Return: square root of n
  */

int _sqrt_recursion(int n)
{
	int res1 = n;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else /*isolates n to be able to comparer*/
	{
		res1 = n - auxiliar(res1, n);
	}

	return (res1);
}
