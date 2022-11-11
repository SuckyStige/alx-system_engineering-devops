#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * infinite_while - manages the timing of the function
 *
 * Return: Always Return 0
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}
/**
 * main - checks the code
 *
 * Return: Always return 0
 */
int main(void)
{
	int i = 0;
	pid_t child_p = 0;

	for (i = 0; i < 5; i++)
	{
		child_p = fork();
		if (child_p > 0)
			printf("Zombie process created, PID: %d\n", child_p);
		else
			exit(0);
	}
	return (infinite_while());
}
