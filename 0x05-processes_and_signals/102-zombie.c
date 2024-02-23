#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

/**
 * main - main function
 * Return: Nothing
*/
int main(void)
{
	int i;
	pid_t mypid;

	for (i = 0; i < 5; i++)
	{
		mypid = fork();
		if (mypid)
		{
			printf("Zombie process created, PID: %d\n", mypid);
		}
		else
			exit(0);
	}
	sleep(100);
	return (0);
}
