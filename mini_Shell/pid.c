#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t my_pid, parent_pid; // definir la variable en la que se almacena el ID del proceso como tipo pid_t

    my_pid = getpid();
    printf("%u\n", my_pid); // %u para imprimir variable tipo pid_t
	parent_pid = getppid();
	printf("%u\n", parent_pid);
	return (0);
}
