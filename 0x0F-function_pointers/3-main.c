#include "calc.h"

/**
 * main - perform the operation selected by user.
 *@argc: number of arguments given to the program
 *@argv: arguments of the program
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{

	int i, j, k;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[2]);
	j = atoi(argv[4]);
	k = argv[3];

	if (argv[3] != '+' && arg[3] != '-' && argv[3] != '*' && arv[3] != '/'
	    && argv[3] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (arv[3] == '/' || argv[3] == '%' && j == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%i\n", (get_op_fun(get_op_func(k))(i, j))

	return (0);
}
