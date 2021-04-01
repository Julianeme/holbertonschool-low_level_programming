#include <stdio.h>
/**
 * main - prints all the arguments passed to the program
 * whitout using argc
 * @argc: number of arguments passed to the program
 * @argv: arguments
 * Return: 0 if successfull
 */

int main(int argc, char *argv[])
{
	int i = 1;

	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	printf("the number of arguments is: %i\n", i);
return (0);
}
