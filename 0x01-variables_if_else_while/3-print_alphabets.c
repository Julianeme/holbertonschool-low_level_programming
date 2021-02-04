#include <stdio.h>
/**
 * main - prints the alphabet
 * Return: 0
 */
int main(void)
{
	char x;

for (x = 'a'; x <= 'z'; x++)
	{
	putchar(x);
	}
for (x = 'A'; x <= 'Z'; x++)
	{
	putchar(x);
	}
putchar(10);
return (0);
}
