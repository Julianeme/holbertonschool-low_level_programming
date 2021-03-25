#include <stdio.h>

/**
 * binary_to_uint - convert and prints a binary tumber into decimal ui
 * @b: The number to be printed in char format
 *Return: the number in decimal ui format if success or 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, k, j;
	unsigned int res, sum = 0;

	if (!b)
		return (NULL);
	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}
	i = i - 1;
	if (b[i] == '1')
		sum = 1;
	else if (b[i] == '0')
		sum = 0;
	i--;
	k = i;
	j = k;
	while (i >= 0)
	{
		res = 1;
		if (b[i] == '1')
		{
			j = i;
			while (j <= k)
			{
				res = res * 2;
				j++;
			}
			sum = sum + res;
		}
	i--;
	}
	return (sum);
}
