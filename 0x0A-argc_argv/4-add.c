#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
int _isdigit(int c);

/**
 * _isdigit - function that checks for numbers
 *
 *@c: int tha stores the value to be checked
 *
 *Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 *main - Adds two positive numbers
 *@argc: captures the number of commands in the command line
 *@argv: captures the strings in the command line
 *Return: 0 if the operation was succesful, 0 it not
 */

int main(int argc, char *argv[])
{
	int res = 0;
	int i, j;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (_isdigit(argv[i][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
