#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the number of arguments in the command line
 *@argc: captures the number of commands in the command line
 *@argv: unused argument
 *Return: always 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
return (0);
}
