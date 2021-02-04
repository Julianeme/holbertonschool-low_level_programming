#include <stdio.h>
/**
 * main - prints the alphabet except e and q
 * Return: 0
 */
int main(void)
{
	char x;

for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
			putchar(x);
	}
putchar(10);
return (0);
}
