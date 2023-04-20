#include "shell.h"

/**
 * execute_command - forks and executes commands
 */

void execute_command(char *args[])
{
	int status;
	pid_t pid;

	pid = fork();
	if (pid == 0)
	{
		execvp(args[0], args);
		perror("Error: command not found\n");
		exit(1);
	}
	else if (pid > 0)
	{
		wait(&status);
	}
	else
	{
		perror("Error: failed to fork\n");
		exit(1);
	}
}
