#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the number of arguments in the command line
 *@argc: captures the number of commands in the command line
 *Return: always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{

	printf("%d\n", argc - 1);
return (0);
}
