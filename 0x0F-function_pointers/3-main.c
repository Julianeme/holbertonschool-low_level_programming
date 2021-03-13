#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - perform the operation selected by user.
 *@argc: number of arguments given to the program
 *@argv: arguments of the program
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{

	int i, j;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);


	if ((*argv[2] == '/' ||  *argv[2] == '%') && j == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%i\n", get_op_func(argv[2])(i, j));

	return (0);
}
